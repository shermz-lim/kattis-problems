#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int w,l;

void solve() {
    char arr[l][w];
    int x,y;
    for(int i=0;i<l;i++){
        for(int j=0;j<w;j++){
            cin>>arr[i][j];
            if(arr[i][j]=='*'){
                x=i;
                y=j;
            }
        }
    }
    int dir_x=(x==0)?1:(x==l-1)?-1:0;
    int dir_y=(y==0)?1:(y==w-1)?-1:0;
    while(arr[x][y]!='x'){
        if(arr[x][y]=='/'){
            int new_dir_x=dir_x!=0?0:dir_y==-1?1:-1;
            int new_dir_y=dir_y!=0?0:dir_x==-1?1:-1;
            dir_x=new_dir_x;
            dir_y=new_dir_y;
        }else if(arr[x][y]=='\\'){
            int new_dir_x=dir_x!=0?0:dir_y==-1?-1:1;
            int new_dir_y=dir_y!=0?0:dir_x==-1?-1:1;
            dir_x=new_dir_x;
            dir_y=new_dir_y;            
        }
        x+=dir_x;
        y+=dir_y;
    }
    arr[x][y]='&';
    for(int i=0;i<l;i++){
        for(int j=0;j<w;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc=1;
    while(cin>>w>>l, !(w==0&&l==0)){
        cout<<"HOUSE "<<tc<<endl;
        solve();
        tc++;
    }
}