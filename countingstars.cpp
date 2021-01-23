#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

bool visited[101][101];
bool pixels[101][101];

void dfs(int m,int n, int x,int y){
    int up=x-1;
    int down=x+1;
    int left=y-1;
    int right=y+1;
    if(up>=0&&!visited[up][y]&&pixels[up][y]){
        visited[up][y]=true;
        dfs(m,n,up,y);
    }
    if(left>=0&&!visited[x][left]&&pixels[x][left]){
        visited[x][left]=true;
        dfs(m,n,x,left);
    }
    if(down<m&&!visited[down][y]&&pixels[down][y]){
        visited[down][y]=true;
        dfs(m,n,down,y);
    }
    if(right<n&&!visited[x][right]&&pixels[x][right]){
        visited[x][right]=true;
        dfs(m,n,x,right);
    }        
}

void solve(int m,int n) {
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            char c; cin>>c;
            pixels[i][j]=c=='-';
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            visited[i][j]=false;
        }
    }    
    int cc=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(!visited[i][j]&&pixels[i][j]){
                visited[i][j]=true;
                cc++;
                dfs(m,n,i,j);
            }
        }
    }
    cout<<cc<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    int m,n;
    
    while(cin>>m>>n){
        cout<<"Case "<<tc<<": ";
        solve(m, n);
        tc++;
    }
}


