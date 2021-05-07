#include <bits/stdc++.h>
using namespace std;

#define LSOne(S) ((S) & -(S))                    // the key operation

typedef long long ll;                            // for extra flexibility
typedef vector<ll> vll;
typedef vector<int> vi;

class FenwickTree {                              // index 0 is not used
    private:
        vll ft;                                        // internal FT is an array
    public:
        FenwickTree(int m) { ft.assign(m+1, 0); }      // create an empty FT

        ll rsq(int j) {                                // returns RSQ(1, j)
            ll sum = 0;
            for (; j; j -= LSOne(j))
                sum += ft[j];
            return sum;
        }

        ll rsq(int i, int j) { return rsq(j) - rsq(i-1); } // inc/exclusion

        // updates value of the i-th element by v (v can be +ve/inc or -ve/dec)
        void update(int i, ll v) {
            for (; i < (int)ft.size(); i += LSOne(i))
                ft[i] += v;
        }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, q;
    cin >> n >> q;
    FenwickTree ft(n);
    vector<bool> bits(n, 0);
    for (int i = 0; i < q; i++) {
        char c;
        ll x, y;
        cin >> c;
        if (c == 'F') {
            cin >> x;
            ft.update(x, bits[x] ? -1 : 1);
            bits[x] = !bits[x];
        } else {
            cin >> x >> y;
            cout << (ft.rsq(x, y)) << "\n";
        }
    }
    return 0;
}
