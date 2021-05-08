#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        arr.push_back(x);
    }
    unordered_map<int, vector<int>> sum_map;
    for (int ss = 1; ss < (1 << n); ss++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (ss & (1 << i)) {
                sum += arr[i];
            }
        }
        sum_map[sum].push_back(ss);
    }
    for (auto it : sum_map) {
        if (it.second.size() > 1) {
            int ss1 = it.second.front();
            int ss2 = it.second.back();
            for (int i = 0; i < n; i++) {
                if (ss1 & (1 << i)) {
                    cout << arr[i] << " ";
                }
            }
            cout << "\n";
            for (int i = 0; i < n; i++) {
                if (ss2 & (1 << i)) {
                    cout << arr[i] << " ";
                }
            }
            cout << "\n";            
            return;
        }
    }
    cout << "Impossible\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        cout << "Case #" << t << ":\n";
        solve();
    }
}