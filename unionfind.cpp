// UFDS from CP4 book
// Union-Find Disjoint Sets Library written in OOP manner, using both path compression and union by rank heuristics

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

class UnionFind {                                // OOP style
    private:
        vi p, rank, setSize;                           // vi p is the key part
        int numSets;
    public:
        UnionFind(int N) {
            p.assign(N, 0);
            for (int i = 0; i < N; ++i) p[i] = i;
            rank.assign(N, 0);                           // optional speedup
        }

        int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
        bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }

        int numDisjointSets() { return numSets; }      // optional
        int sizeOfSet(int i) { return setSize[findSet(i)]; } // optional

        void unionSet(int i, int j) {
            int x = findSet(i), y = findSet(j);          // find both rep items
            if (x == y) return;
            if (rank[x] > rank[y]) swap(x, y);           // keep x 'shorter' than y
            p[x] = y;                                    // set x under y
            if (rank[x] == rank[y]) ++rank[y];           // optional speedup
        }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, q;
    cin >> n >> q;
    UnionFind UF(n);
    for (int i = 0; i < q; i++) {
        char c;
        int x, y;
        cin >> c >> x >> y;
        if (c == '?') {
            cout << (UF.isSameSet(x, y) ? "yes\n" : "no\n");
        } else {
            UF.unionSet(x, y);
        }
    }
}
