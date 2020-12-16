#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int r,c;
    cin>>r>>c;
    char arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int x=0,y=0;
    int moves=0;
    while(1){
        char curr=arr[x][y];
        arr[x][y]='V';
        if(curr=='T'){
            cout<<moves<<endl;
            break;
        }else if(curr=='N'){
            x--;
        }else if(curr=='S'){
            x++;
        }else if(curr=='W'){
            y--;
        }else if(curr=='E'){
            y++;
        }else if(curr=='V'){
            cout<<"Lost"<<endl;
            break;
        }
        if(x<0||x==r||y<0||y==c){
            cout<<"Out"<<endl;
            break;
        }
        moves++;
    }
}