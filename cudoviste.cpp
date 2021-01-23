#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int r,c;
    cin>>r>>c;
    char arr[r][c];
    int spaces[5]={0};
    for(int i=0;i<r;i++){for(int j=0;j<c;j++){cin>>arr[i][j];}}
    for(int i=0;i<r-1;i++){
        for(int j=0;j<c-1;j++){
            bool building=false;
            int numCars=0;
            for(int k=i;k<i+2;k++){
                for(int l=j;l<j+2;l++){
                    if(arr[k][l]=='#') building=true;
                    if(arr[k][l]=='X') numCars++;
                }
            }
            if(!building)spaces[numCars]++;
        }
    }
    for(int i=0;i<5;i++){
        cout<<spaces[i]<<endl;
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