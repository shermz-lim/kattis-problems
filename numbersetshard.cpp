#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

ll _sieve_size;
bitset<10000010> bs;                             // 10^7 is the rough limit
vll primes;                                          // compact list of primes

void sieve(ll upperbound) {                      // range = [0..upperbound]
    _sieve_size = upperbound+1;                    // to include upperbound
    bs.set();                                      // all 1s
    bs[0] = bs[1] = 0;                             // except index 0+1
    for (ll i = 2; i < _sieve_size; ++i) if (bs[i]) {
        // cross out multiples of i starting from i*i
        for (ll j = i*i; j < _sieve_size; j += i) bs[j] = 0;
        primes.push_back(i);                              // add prime i to the list
    }
}

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

        int numDisjointSets() { return numSets; }      // optional
        int sizeOfSet(int i) { return setSize[findSet(i)]; } // optional

        void unionSet(int i, int j) {
            if (isSameSet(i, j)) return;                 // i and j are in same set
            int x = findSet(i), y = findSet(j);          // find both rep items
            if (rank[x] > rank[y]) swap(x, y);           // keep x 'shorter' than y
            p[x] = y;                                    // set x under y
            if (rank[x] == rank[y]) ++rank[y];           // optional speedup
            setSize[y] += setSize[x];                    // combine set sizes at y
            --numSets;                                   // a union reduces numSets
        }
};

void solve(int tc) {
    ll a, b, p;
    cin >> a >> b >> p;

    UnionFind UF(b - a + 1);
    for (auto v : primes) {
        if (v < p) {
            continue;
        }
        for (ll i = (a / v) * v; i <= b; i += v) {
            if (i >= a && (i - v) >= a && i <= b) {
                // cout << i << " " << (i - v) << endl;
                UF.unionSet(i - a, i - v - a);
            }
        }
    }
    cout << "Case #" << tc << ": " << UF.numDisjointSets() << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    sieve(10000000);
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve(i);
    }
}

