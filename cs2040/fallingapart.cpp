#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr, arr+n);
    bool a=true;
    ll sumA=0,sumB=0;
    for(int i=n-1;i>=0;i--){
        if(a) {
            sumA+=arr[i]; 
        }else{
            sumB+=arr[i];
        }
        a=!a;
    }
    cout<<sumA<<" "<<sumB<<endl;
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