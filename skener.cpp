#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int r,c,zr,zc;
    cin>>r>>c>>zr>>zc;
    char arr[r*zr][c*zc];
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            char x;
            cin>>x;
            for (int k=i*zr;k<(i+1)*zr;k++) {
                for (int l=j*zc;l<(j+1)*zc;l++) {
                    arr[k][l]=x;
                }                
            }
        }
    }
    for (int i=0;i<r*zr;i++){
        for (int j=0;j<c*zc;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}