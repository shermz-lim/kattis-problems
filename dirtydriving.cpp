#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n,p;
    cin>>n>>p;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    ll min_dist=LLONG_MAX;
    ll cur=0;
    for(int i=0;i<n;i++){
        ll dist=max(arr[i], p*(i+1));
        if((arr[i]-dist)<cur){
            cur=arr[i]-dist;
        }
    }
    cout<<(arr[0]-cur)<<endl;
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