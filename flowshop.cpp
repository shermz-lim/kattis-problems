#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int up=i>0?arr[i-1][j]:0;
            int left=j>0?arr[i][j-1]:0;
            int prevTime=max(up, left);
            arr[i][j]+=prevTime;
        }
        cout<<arr[i][m-1];
        if(i!=n-1) cout<<" ";
    }
    cout<<endl;
}