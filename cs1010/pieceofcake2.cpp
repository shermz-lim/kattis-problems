#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n,h,v;
    cin>>n>>h>>v;
    int res=max(n-h,h)*max(n-v,v)*4;
    cout<<res<<endl;
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