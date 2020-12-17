#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

bool visited[101][101];
bool pixels[101][101];

void dfs(int m,int n, int x,int y){
    for(int i=x-1;i<=x+1;i++){
        for(int j=y-1;j<=y+1;j++){
            if(i==x&&j==y) continue;
            if(i>=0&&i<m&&j>=0&&j<n&&!visited[i][j]&&pixels[i][j]){
                visited[i][j]=true;
                dfs(m,n,i,j);
            }
        }
    }
}

void solve() {
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            char c; cin>>c;
            pixels[i][j]=c=='#';
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
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}
