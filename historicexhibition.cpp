#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;

vi match, vis;                                   // global variables
vector<vi> AL;

int Aug(int L) {
    if (vis[L]) return 0;                          // L visited, return 0
    vis[L] = 1;
    for (auto &R : AL[L])
        if ((match[R] == -1) || Aug(match[R])) {
            match[R] = L;                              // flip status
            return 1;                                  // found 1 matching
        }
    return 0;                                      // no matching
}

string IMP = "impossible\n";

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int p, v;
    cin >> p >> v;

    if (v > p) {
        cout << IMP;
        return 0;
    }

    int V = p + v;
    int Vleft = v;

    vector<pair<int,int> > pedastals;
    for (int i = 0; i < p; i++) {
        int ai, bi;
        cin >> ai >> bi;
        pedastals.push_back(make_pair(ai, bi));
    }

    AL.assign(V, vi());

    for (int i = 0; i < v; i++) {
        int ci;
        cin >> ci;
        for (int j = 0; j < p; j++) {
            auto pedastal = pedastals[j];
            if (pedastal.first == ci || pedastal.second == ci) {
                AL[i].push_back(Vleft + j);
            }
        }
    }

    unordered_set<int> freeV;
    for (int L = 0; L < Vleft; ++L)
        freeV.insert(L);                             // initial assumption
    match.assign(V, -1);
    int MCBM = 0;
    // Greedy pre-processing for trivial Augmenting Paths
    // try commenting versus un-commenting this for-loop
    for (int L = 0; L < Vleft; ++L) {              // O(V+E)
        vi candidates;
        for (auto &R : AL[L])
            if (match[R] == -1)
                candidates.push_back(R);
        if ((int)candidates.size() > 0) {
            ++MCBM;
            freeV.erase(L);                            // L is matched
            int a = rand()%(int)candidates.size();     // randomize this
            match[candidates[a]] = L;
        }
    }                                              // for each free vertex
    for (auto &f : freeV) {                        // (in random order)
        vis.assign(Vleft, 0);                        // reset first
        MCBM += Aug(f);                              // try to match f
    }

    if (MCBM < v) {
        cout << IMP;
        return 0;
    }

    vector<int> pairs(Vleft);
    for (int i = v; i < V; i++) {
        if (match[i] >= 0) {
            pairs[match[i]] = i - v + 1;
        }
    }
    for (int i : pairs) {
        cout << i << "\n";
    }

    return 0;
}
