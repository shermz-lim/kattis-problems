#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

int c, b;
vector<int> AL;
vector<int> AL_T;
vector<int> visited;
unordered_set<int> cliques;

#define LSOne(S) (S & (-S))

// returns true if graph is bipartite
bool dfs(int u) {
    
    int mask = AL[u];
    while (mask) {
        int two_pow_v = LSOne(mask);
        int v = __builtin_ctzl(two_pow_v);
        mask -= two_pow_v;
        if (visited[v] == -1) {
            visited[v] = visited[u] == 0 ? 1 : 0; 
            if (!dfs(v)) return false;
        } else if (visited[v] == visited[u]) {
            return false;
        }
    }
    
    return true;
}

bool isBipartite() {
    visited.assign(c, -1);
    for (int i = 0; i < c; i++) {
        if (visited[i] == -1) {
            visited[i] = 0;
            if (!dfs(i)) return false;
        }
    }
    return true;
}

int mem[65600];
int min_clique_cover(int mask) {
    if (mask == 0) {
        return 0;
    }
    if (mem[mask] != -1) return mem[mask];
    int mcc = INT_MAX;
    for (int ss = mask; ss; ss = (ss - 1) & mask) {
        if (cliques.count(mask ^ ss) == 1) {
            mcc = min(mcc, min_clique_cover(ss) + 1);
        }
    }
    if (cliques.count(mask) == 1) {
        mcc = min(mcc, min_clique_cover(0) + 1);
    }
    mem[mask] = mcc;
    return mcc;
}

void solve() {
    cin >> c >> b;
    AL.assign(c, 0);

    for (int i = 0; i < b; i++) {
        int u, v;
        cin >> u >> v;
        AL[u] |= (1 << v);
        AL[v] |= (1 << u);
    }

    if (b == 0) {
        cout << 1 << "\n";
        return;
    }

    if (isBipartite()) {
        cout << 2 << "\n";
        return;
    }

    // get complement graph
    for (int i = 0; i < c; i++) {
        AL[i] = (~AL[i]) & ((1 << c) - 1);
    }
    
    // find min clique cover of complement graph
    int sz = (int) pow(2, c);
    cliques.clear();
    for (int i = 1; i < sz; i++) {
        int mask1 = i;
        bool is_clique = true;
        while (mask1) {
            int two_pow_u = LSOne(mask1);
            int u = __builtin_ctzl(two_pow_u);
            mask1 -= two_pow_u;
            int mask2 = i;
            while (mask2) {
                int two_pow_v = LSOne(mask2);
                int v = __builtin_ctzl(two_pow_v);
                mask2 -= two_pow_v;
                if (!(AL[u] & (1 << v))) {
                    is_clique = false; break;
                }
            }
        }
        if (is_clique) {
            cliques.insert(i);
        }
    }

    memset(mem, -1, sizeof(mem));
    int mcc = min_clique_cover((1 << c) - 1);
    cout << (mcc < 5 ? to_string(mcc) : "many") << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}

