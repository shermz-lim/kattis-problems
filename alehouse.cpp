#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll,bool> ii;


void solve() {
    int n;
    ll k;
    cin >> n >> k;
    vector<ii> coords;
    for (int i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        a = max(a - k, (ll)0);
        coords.push_back(make_pair(a, 0));
        coords.push_back(make_pair(b, 1));
    }
    sort(coords.begin(), coords.end());
    int max_overlap = 0;
    int overlap = 0;
    for (ii& coord : coords) {
        if (coord.second) {
            overlap--;
        } else {
            overlap++;
        }
        max_overlap = max(max_overlap, overlap);
    }
    cout << max_overlap << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    solve();
}
