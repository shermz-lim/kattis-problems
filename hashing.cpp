#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 300005;

string T;
int n;                // n = |T|

// Rabin-Karp's algorithm specific code
typedef long long ll;

const int p1 = 131;     // p and M are
const int M1 = 1e9 + 7; // relatively prime

int Pow1[MAX_N]; // to store p^i % M
int h1[MAX_N];   // to store prefix hashes

const int p2 = 31;     // p and M are
const int M2 = 1e9 + 9; // relatively prime

int Pow2[MAX_N]; // to store p^i % M
int h2[MAX_N];   // to store prefix hashes

void computeRollingHash(int* Pow, int* h, int p, int M)
{                               // Overall: O(n)
    Pow[0] = 1;                 // compute p^i % M
    for (int i = 1; i < n; ++i) // O(n)
        Pow[i] = ((ll)Pow[i - 1] * p) % M;
    h[0] = 0;
    for (int i = 0; i < n; ++i)
    { // O(n)
        if (i != 0)
            h[i] = h[i - 1]; // rolling hash
        h[i] = (h[i] + ((ll)(T[i] - 'a' + 1) * Pow[i]) % M) % M;
    }
}

int extEuclid(int a, int b, int &x, int &y)
{ // pass x and y by ref
    int xx = y = 0;
    int yy = x = 1;
    while (b)
    { // repeats until b == 0
        int q = a / b;
        tie(a, b) = tuple(b, a % b);
        tie(x, xx) = tuple(xx, x - q * xx);
        tie(y, yy) = tuple(yy, y - q * yy);
    }
    return a; // returns gcd(a, b)
}

int modInverse(int b, int m)
{ // returns b^(-1) (mod m)
    int x, y;
    int d = extEuclid(b, m, x, y); // to get b*x + m*y == d
    if (d != 1)
        return -1; // to indicate failure
    // b*x + m*y == 1, now apply (mod m) to get b*x == 1 (mod m)
    return (x + m) % m; // this is the answer
}

int hash_fast(int L, int R, int *Pow, int *h, const int M)
{ // O(1) hash of any substr
    if (L == 0)
        return h[R]; // h is the prefix hashes
    int ans = 0;
    ans = ((h[R] - h[L - 1]) % M + M) % M;       // compute differences
    ans = ((ll)ans * modInverse(Pow[L], M)) % M; // remove P[L]^-1 (mod M)
    return ans;
}

int main()
{
    cin >> T;
    n = T.size();
    computeRollingHash(Pow1, h1, p1, M1);
    computeRollingHash(Pow2, h2, p2, M2);
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        r--;
        int hash1 = hash_fast(l, r, Pow1, h1, M1);
        int hash2 = hash_fast(l, r, Pow2, h2, M2);
        ll hash = ((ll) hash1) << 32;
        hash |= hash2;
        cout << hash << "\n";
    }
}