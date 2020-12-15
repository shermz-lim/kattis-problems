#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int m,n,u,l,r,d;
    cin>>m>>n>>u>>l>>r>>d;
    char words[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>words[i][j];
        }
    }
    int height=m+u+d;
    int width=n+l+r;
    char output[height][width];
    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
            if(i%2==0){
                output[i][j]=j%2==0?'#':'.';
            }else{
                output[i][j]=j%2==0?'.':'#';
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            output[i+u][j+l]=words[i][j];
        }
    }    
    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
            cout<<output[i][j];
        }
        cout<<endl;
    }    
}