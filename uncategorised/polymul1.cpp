#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n,m;
    cin>>n;
    int arr1[n+1];
    for(int i=0;i<(n+1);i++) cin>>arr1[i];
    cin>>m;
    int arr2[m+1];
    for(int i=0;i<(m+1);i++) cin>>arr2[i];
    int arr[n+m+1];
    for(int i=0;i<(n+m+1);i++){
        int coeff=0;
        for(int j=0;j<(n+1);j++){
            for(int k=0;k<(m+1);k++){
                if((j+k)==i){
                    coeff+=(arr1[j]*arr2[k]);
                }
            }
        }
        arr[i]=coeff;
    }
    cout<<(n+m)<<endl;
    for(int i=0;i<(n+m+1);i++){
        if(i>0) cout<<" ";
        cout<<arr[i];
    }
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}