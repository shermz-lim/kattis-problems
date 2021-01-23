#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long


void solve() {
    double s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    double s = (s1+s2+s3+s4)/2;
    double ans = sqrt(
        (s-s1)*(s-s2)*(s-s3)*(s-s4)
    );
    cout<<fixed;
    cout.precision(10);
    cout<<ans<<endl;
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