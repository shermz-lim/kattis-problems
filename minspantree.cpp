#include <bits/stdc++.h>
using namespace std;

typedef tuple<int, int, int> iii;
typedef vector<int> vi;

// UFDS code from ch2/ownlibrary/ufds.cpp
// Union-Find Disjoint Sets Library written in OOP manner, using both path compression and union by rank heuristics
class UnionFind {                                // OOP style
    private:
        vi p, rank, setSize;                           // vi p is the key part
        int numSets;
    public:
        UnionFind(int N) {
            p.assign(N, 0); for (int i = 0; i < N; ++i) p[i] = i;
            rank.assign(N, 0);                           // optional speedup
            setSize.assign(N, 1);                        // optional feature
            numSets = N;                                 // optional feature
        }
        int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
        bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
        void unionSet(int i, int j) {
            if (isSameSet(i, j)) return;                 // i and j are in same set
            int x = findSet(i), y = findSet(j);          // find both rep items
            if (rank[x] > rank[y]) swap(x, y);           // keep x 'shorter' than y
            p[x] = y;                                    // set x under y
            if (rank[x] == rank[y]) ++rank[y];           // optional speedup
            setSize[y] += setSize[x];                    // combine set sizes at y
            --numSets;                                   // a union reduces numSets
        }
        int numDisjointSets() { return numSets; }
        int sizeOfSet(int i) { return setSize[findSet(i)]; }
};

int n, m;

void solve() {
    vector<iii> EL;
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        EL.push_back({w, u, v});
        EL.push_back({w, v, u});
    }
    sort(EL.begin(), EL.end());                    // sort by w, O(E log E)
    // note: std::tuple has built-in comparison function

    int mst_cost = 0, num_taken = 0;               // no edge has been taken
    UnionFind UF(n);                               // all V are disjoint sets
    // note: the runtime cost of UFDS is very light
    vector<pair<int,int>> answer;
    for (int i = 0; i < EL.size(); ++i) {                  // up to O(E)
        auto [w, u, v] = EL[i];                      // C++17 style
        if (UF.isSameSet(u, v)) continue;            // already in the same CC
        mst_cost += w;                               // add w of this edge
        UF.unionSet(u, v);                           // link them
        answer.push_back(make_pair(min(u, v), max(u, v)));
        ++num_taken;                                 // 1 more edge is taken
        if (num_taken == n - 1) break;                 // optimization
    }

    if (num_taken < (n - 1)) {
        cout << "Impossible\n";
    } else {
        cout << mst_cost << "\n";
        sort(answer.begin(), answer.end());
        for (auto it : answer) {
            cout << it.first << " " << it.second << "\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    while (cin >> n >> m, n) {
        solve();
    }
}
