#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n,t;
    cin>>n>>t;
    int tot=0;
    for(int i=0;i<n;i++){
        int temp;cin>>temp;
        tot+=temp;
        if(tot>t){
            cout<<i<<endl; return;
        }
    }
    cout<<n<<endl;
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