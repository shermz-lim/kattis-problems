#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int t;
    cin>>t;
    for (int i=1;i<=t;i++){
        int r,c;
        cin>>r>>c;
        char arr[r][c];
        for (int j=0;j<r;j++){
            for (int k=0;k<c;k++){
                cin>>arr[j][k];
            }
        }
        cout<<"Test "<<i<<endl;
        for (int j=r-1;j>=0;j--){
            for (int k=c-1;k>=0;k--){
                cout<<arr[j][k];
            }
            cout<<endl;
        }                
    }
}