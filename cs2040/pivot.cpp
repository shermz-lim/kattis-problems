#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxis[n],minis[n];
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
        maxis[i]=maxi;
    }
    int mini=INT_MAX;
    for(int i=n-1;i>=0;i--){
        mini=min(mini,arr[i]);
        minis[i]=mini;
    }
    int t=0;
    for(int i=0;i<n;i++){
        bool y=true;
        if(i-1>=0&&maxis[i-1]>arr[i]) y=false;
        if(i+1<n&&minis[i+1]<=arr[i]) y=false;
        if(y) t++;
    }
    cout<<t<<endl;
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