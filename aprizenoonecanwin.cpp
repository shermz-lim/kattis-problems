#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n; ll x;
    cin>>n>>x;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int i=n-1;
    while(i>0){
        if(arr[i]+arr[i-1]>x){
            i--;
        }else{
            break;
        }
    }
    cout<<(i+1)<<endl;
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