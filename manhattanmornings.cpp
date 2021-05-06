#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, xh, yh, xw, yw;
    cin >> n >> xh >> yh >> xw >> yw;
    vector<pair<int, int> > dists;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if (x >= min(xh, xw) && x <= max(xh, xw)
            && y >= min(yh, yw) && y <= max(yh, yw)) {
            dists.push_back(make_pair(abs(x - xh), abs(y - yh))); 
        }
    }
    sort(dists.begin(), dists.end());
    vector<int> lis;
    for (int i = 0; i < dists.size(); i++) {
        int b = dists[i].second;
        vector<int>::iterator k = upper_bound(lis.begin(), lis.end(), b);
        if (k == lis.end()) {
            lis.push_back(b);
        } else {
            lis[k - lis.begin()] = b;
        }
    }
    cout << lis.size() << endl;
}
