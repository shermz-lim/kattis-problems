#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

bool comp(int x,int y){
    return x>y;
}

void solve() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr, arr+n, comp);
    int maxi=-1;
    for(int i=1;i<=n;i++){
        maxi=max(maxi,arr[i-1]+i);
    }
    cout<<(maxi+1)<<endl;
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