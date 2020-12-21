#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int grid[4][4];

void rotate(int dir){
    int temp[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(dir==0){
                temp[i][j]=grid[i][j];
            }else if(dir==1){
                temp[j][i]=grid[i][j];
            }else if(dir==2){
                temp[3-i][3-j]=grid[i][j];
            }else{
                temp[j][3-i]=grid[i][j];
            }
        }
    }
    for(int i=0;i<4;i++){for(int j=0;j<4;j++){ grid[i][j]=temp[i][j]; }}
}

void reverseRotate(int dir){
    int temp[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(dir==0){
                temp[i][j]=grid[i][j];
            }else if(dir==1){
                temp[i][j]=grid[j][i];
            }else if(dir==2){
                temp[i][j]=grid[3-i][3-j];
            }else{
                temp[i][j]=grid[j][3-i];
            }
        }
    }
    for(int i=0;i<4;i++){for(int j=0;j<4;j++){ grid[i][j]=temp[i][j]; }}
}

void solve() {
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>grid[i][j];
        }
    }
    int move; cin>>move;
    rotate(move);
    for(int i=0;i<4;i++){
        int j=0;
        int leftLimit=0;
        while(j<4){
            if(grid[i][j]!=0){
                int left=j-1;
                while(grid[i][left]==0&&left>=leftLimit){
                    left--;
                }
                int temp=grid[i][j]; grid[i][j]=0;
                if(left>=leftLimit&&grid[i][left]==temp){
                    grid[i][left]*=2;
                    grid[i][j]=0;
                    leftLimit=left+1;
                }else{
                    left++;
                    grid[i][left]=temp;
                }
            }
            j++;
        }
    }
    reverseRotate(move);
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<grid[i][j];
            if(j!=3)cout<<" ";
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