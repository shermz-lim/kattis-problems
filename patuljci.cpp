#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int t=0;
    int arr[9];
    for(int i=0;i<9;i++){
        cin>>arr[i];
        t+=arr[i];
    }
    int idx1,idx2;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<9;j++){
            if((t-arr[i]-arr[j])==100){
                idx1=i;idx2=j;
            }
        }
    }
    int sum=0;
    for(int i=0;i<9;i++){
        if(!(i==idx1||i==idx2)){
            sum+=arr[i];
            cout<<arr[i]<<endl;
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