#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int &v : arr) {
        cin >> v;
    }

    int curr = 0;
    int max_sum = 0;
    while (curr < n) {
        if (arr[curr] == m) {
            int left = curr - 1;
            int tot = m;
            while (left >= 0 && arr[left] > m) {
                tot += arr[left];
                left--;
            }
            int right = curr + 1;
            while (right < n && arr[right] > m) {
                tot += arr[right];
                right++;
            }
            max_sum = max(max_sum, tot);
            curr = right;
        } else {
            curr++;
        }
    }
    cout << max_sum << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}