#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

int n;

void solve() {
    vector<int> arr(n);
    for (int &v : arr) {
        cin >> v;
    }
    vector<pair<int,int>> LIS;
    vector<int> P(n, -1);
    for (int i = 0; i < n; i++) {
        int v = arr[i];
        int low = 0;
        int high = LIS.size();
        while (low != high) {
            int mid = low + (high - low) / 2;
            if (LIS[mid].first < v) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        if (low == LIS.size()) {
            LIS.push_back(make_pair(v, i));
        } else {
            LIS[low] = make_pair(v, i);
        }
        if (low > 0) {
            P[i] = LIS[low - 1].second;
        }
    }
    cout << LIS.size() << endl;
    int curr = LIS.back().second;
    vector<int> answer;
    for (int i = 0; i < LIS.size(); i++) {       
        answer.push_back(curr);
        curr = P[curr];
    }
    for (int i = 0; i < LIS.size(); i++) {
        if (i > 0) cout << " ";
        cout << answer[LIS.size() - 1 - i];
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    while (cin >> n) {
        solve();
    }
}