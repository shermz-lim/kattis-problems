#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<pair<int,int> > points;
    unordered_map<int,int> x_count;
    unordered_map<int,int> y_count;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        points.push_back(make_pair(x, y));
        x_count[x]++;
        y_count[y]++;
    }

    ll tot = 0;
    for (pair<int,int> &p : points) {
        tot += ((ll)(x_count[p.first] - 1) * (y_count[p.second] - 1));
    }

    cout << tot << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}