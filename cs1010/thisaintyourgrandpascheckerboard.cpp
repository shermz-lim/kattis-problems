#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    cin>>n;
    char arr[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    bool c=true;
    for (int i=0;i<n;i++){
        int rw=0,rb=0,cw=0,cb=0;
        for (int j=0;j<n;j++){
            if (arr[i][j]=='B') {
                rb++;
            } else {
                rw++;
            }
            if (arr[j][i]=='B') {
                cb++;
            } else {
                cw++;
            }        
        }
        c=c&&(rb==rw)&&(cb==cw);
    }
    for (int i=0;i<n;i++){
        for (int j=1;j<n-1;j++){
            c=c&&(!((arr[i][j]==arr[i][j-1]) && (arr[i][j]==arr[i][j+1])));
            c=c&&(!((arr[j][i]==arr[j-1][i]) && (arr[j][i]==arr[j+1][i])));
        }
    }
    cout<<(int)c<<endl;
}