#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    string line;
    getline(cin,line);
    int n=line.size(),r,c;
    for(int i=n;i>0;i--){
        int j=n/i;
        if(j*i==n&&j<=i){
            c=i;
            r=j;
        }
    }
    char arr[r][c];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            arr[j][i]=line[i*r+j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j];
        }
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