#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    double D, d, s;
    cin >> D >> d >> s;
    double dd = (D - d);
    double r = dd / 2;

    double theta = acos((2 * r * r - s * s) / (2 * r * r));
    double arcl = theta * r;

    double theta2 = acos((2 * r * r - d * d) / (2 * r * r));
    double arcl2 = theta2 * r;

    double circum = M_PI * dd;
    cout << (int)(circum / (arcl + arcl2)) << "\n";
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