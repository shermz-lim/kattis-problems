#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

typedef long long ll;

void solve(int n) {
    vector<int> primes;
    while (n--) {
        int pi; cin >> pi; 
        primes.push_back(pi);
    }
    int x, y;
    cin >> x >> y;
    unordered_set<int> res;
    if (x == 1) res.insert(1);
    unordered_set<int> curr = { 1 };
    while (!curr.empty()) {
        unordered_set<int> new_curr;
        for (int k : curr) {
            for (int p : primes) {
                ll mul = ((ll) k) * p;
                if (mul <= y) {
                    new_curr.insert(mul);
                    if (mul >= x) res.insert(mul); 
                }
            }
        }
        curr = new_curr;
    }
    if (res.empty()) {
        cout << "none\n";
    } else {
        vector<int> ans;
        for (int x : res) ans.push_back(x);
        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++) {
            if (i > 0) cout << ",";
            cout << ans[i];
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    while (cin >> n, n) {
        solve(n);
    }
}
