#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr, arr+n);
    int i=0;
    while(i<n){
        int curr=arr[i];
        int j=i+1;
        while(j<n&&(arr[j]==arr[i]+j-i)){
            j++;
        }
        if(j-i>2){
            cout<<arr[i]<<"-"<<arr[j-1];
            i=j;
        }else{
            cout<<arr[i];
            i++;
        }
        if(i!=n) cout<<" ";
    }
    cout<<endl;
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