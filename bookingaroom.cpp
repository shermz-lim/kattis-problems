#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int r,n;
    cin>>r>>n;
    bool arr[r+1]={false};
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr[num]=true;
    }
    for(int i=1;i<=r;i++){
        if(!arr[i]){
            cout<<i<<endl; return;
        }
    }
    cout<<"too late"<<endl;
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