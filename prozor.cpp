#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int r,s,k;
    cin>>r>>s>>k;
    char arr[r][s];
    int x,y,m=0;
    for(int i=0;i<r;i++){for(int j=0;j<s;j++){cin>>arr[i][j];}}
    for(int i=0;i<r-k+1;i++){
        for(int j=0;j<s-k+1;j++){
            int t=0;
            for(int p=i+1;p<(i+k-1);p++){
                for(int q=j+1;q<(j+k-1);q++){
                    if(arr[p][q]=='*'){
                        t++;
                    }
                }     
            }
            if(t>m){
                m=t;x=i;y=j;
            }
        }
    }
    for(int i=x;i<x+k;i++){
        char c='|';
        if(i==x||i==(x+k-1)){
            c='+';
        }
        arr[i][y]=c;
        arr[i][y+k-1]=c;
    }
    for(int j=y+1;j<y+k-1;j++){
        arr[x][j]='-';
        arr[x+k-1][j]='-';
    }
    cout<<m<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<s;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
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