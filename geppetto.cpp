#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<pair<int,int>> restrics;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        restrics.push_back(make_pair(a, b));
    }
    int count = 0;
    for (int i = 0; i < (1 << n); i++) {
        bool violate = false;
        for (int j = 0; j < m; j++) {
            if ((i & (1 << restrics[j].first)) && (i & (1 << restrics[j].second))) {
                violate = true;
                break;
            }
        }
        if (!violate) {
            count++;
        }
    }
    cout << count << endl;
}