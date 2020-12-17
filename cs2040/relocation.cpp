#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n,q;
    cin>>n>>q;
    int loc[n+1];
    for(int i=1;i<=n;i++){
        cin>>loc[i];
    }
    for(int i=0;i<q;i++){
        int command,a,b;
        cin>>command>>a>>b;
        if(command==1){
            loc[a]=b;
        }else{
            cout<<abs(loc[a]-loc[b])<<endl;
        }
    }
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