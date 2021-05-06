#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long


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


vector<string> words;
int word_idx;
const int p1 = 131;     // p and M are
const int M1 = 1e9 + 7; // relatively prime

const int p2 = 31;     // p and M are
const int M2 = 1e9 + 9; // relatively prime

vector<int> Pow1;
vector<int> h1;
vector<int> Pow2;
vector<int> h2;


void computeRollingHash(vector<int> &Pow, vector<int> &h, int p, int M)
{                               // Overall: O(n)
    int n = words[word_idx].size();
    Pow[0] = 1;                 // compute p^i % M
    for (int i = 1; i < n; ++i) // O(n)
        Pow[i] = ((ll)Pow[i - 1] * p) % M;
    h[0] = 0;
    for (int i = 0; i < n; ++i)
    { // O(n)
        if (i != 0)
            h[i] = h[i - 1]; // rolling hash
        h[i] = (h[i] + ((ll)(words[word_idx][i] - 'a' + 1) * Pow[i]) % M) % M;
    }
}

void computeRollingHash()
{
    computeRollingHash(Pow1, h1, p1, M1);
    computeRollingHash(Pow2, h2, p2, M2);
}

int hash_fast(int L, int R, vector<int> &Pow, vector<int> &h, const int M)
{ // O(1) hash of any substr
    if (L == 0)
        return h[R]; // h is the prefix hashes
    int ans = 0;
    ans = ((h[R] - h[L - 1]) % M + M) % M;       // compute differences
    ans = ((ll)ans * modInverse(Pow[L], M)) % M; // remove P[L]^-1 (mod M)
    return ans;
}

ll hash_fast(int L, int R)
{
    int hash1 = hash_fast(L, R, Pow1, h1, M1);
    int hash2 = hash_fast(L, R, Pow2, h2, M2);
    ll hash = ((ll) hash1) << 32;
    hash |= hash2;
    return hash;
}

int hash_fast_substr(int j, vector<int> &Pow, vector<int> &h, const int M)
{ // O(1) hash of substr excluding char at index j
    int n = words[word_idx].size();
    if (j == (n - 1)) {
        return h[j - 1];
    }
    int ans = ((h[n - 1] - h[j]) % M + M) % M;   
    ans = ((ll)ans * modInverse(Pow[1], M)) % M;
    if (j > 0) {
        ans = (ans + h[j - 1]) % M;
    }
    return ans;
}

ll hash_fast_substr(int j)
{
    int hash1 = hash_fast_substr(j, Pow1, h1, M1);
    int hash2 = hash_fast_substr(j, Pow2, h2, M2);
    ll hash = ((ll) hash1) << 32;
    hash |= hash2;
    return hash;
}

void reset_hash_structures(int size)
{
    Pow1.assign(size, 0);
    h1.assign(size, 0);
    Pow2.assign(size, 0);
    h2.assign(size, 0);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    set<ll> hash_set;
    vector<vector<ll> > words_hashes;

    int num_words;
    cin >> num_words;
    for (int i = 0; i < num_words; i++) {
        string word;
        cin >> word;
        words.push_back(word);

        reset_hash_structures(word.size());
        word_idx = i;
        computeRollingHash();
        hash_set.insert(hash_fast(0, word.size() - 1));
    }

    vector<string> typos;
    for (int i = 0; i < num_words; i++) {
        string word = words[i];

        reset_hash_structures(word.size());
        word_idx = i;
        computeRollingHash();

        for (int j = 0; j < word.size(); j++) {
            ll hash = hash_fast_substr(j);
            if (hash_set.count(hash) > 0) {
                typos.push_back(word);
                break;
            }
        }
    }

    if (typos.size() > 0) {
        for (string &word : typos) {
            cout << word << "\n";
        }
    } else {
        cout << "NO TYPOS\n";
    } 
}