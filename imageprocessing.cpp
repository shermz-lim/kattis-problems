#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int h,w,n,m;
    cin>>h>>w>>n>>m;
    int image[h][w];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>image[i][j];
        }
    }
    int kernel[n][m];
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            cin>>kernel[i][j];
        }
    }
    for(int i=0;i<(h-n+1);i++){
        for(int j=0;j<(w-m+1);j++){
            int sum=0;
            for(int k=0;k<n;k++){
                for(int l=0;l<m;l++){
                    sum+=(kernel[k][l]*image[i+k][j+l]);
                }
            }
            cout<<sum;
            if(j!=(w-m)) cout<<" ";
        }
        cout<<endl;
    }
}