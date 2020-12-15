#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int tot=0;
    for(int i=0;i<m;i++){
        bool allU=true;
        for(int j=0;j<n;j++){
            if(arr[j][i]=='$') allU=false;
        }
        if(allU)tot++;
    }
    cout<<(tot+1)<<endl;
}