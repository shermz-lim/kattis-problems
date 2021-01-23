#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n;
    cin>>n;
    ll arr1[n],arr2[n];
    for(int i=0;i<n;i++) cin>>arr1[i];
    for(int i=0;i<n;i++) cin>>arr2[i];
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    int i=0,j=n-1;
    ll prod=0;
    while(i<n){
        prod+=(arr1[i]*arr2[j]);
        i++;j--;
    }
    cout<<prod<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        cout << "Case #" << t  << ": ";
        solve();
    }
}