#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

bool in_grid(int x, int y, int w, int h){
    return x>=0&&x<h&&y>=0&&y<w;
}

void solve() {
    int w,h;
    cin>>w>>h;
    char arr[h][w];
    int x,y;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>arr[i][j];
            if(arr[i][j]=='P'){
                x=i;
                y=j;
            }
        }
    }
    vector<pair<int,int> > dirs={
        {-1,0},{1,0},{0,-1},{0,1}
    };
    bool visited[h][w]={false};
    queue<pair<int, int> > q;
    q.push(make_pair(x,y));
    visited[x][y]=true;
    int total=0;
    while(!q.empty()){
        pair<int,int> u=q.front();
        q.pop();
        x=u.first;
        y=u.second;
        if(arr[x][y]=='G'){
            total++;
        }
        bool trap_nearby=false;
        for(pair<int,int> dir:dirs){
            int newX=x+dir.first;
            int newY=y+dir.second;
            if(in_grid(newX, newY, w, h)&&arr[newX][newY]=='T'){
                trap_nearby=true;
            }
        }
        if(trap_nearby) continue;
        for(pair<int,int> dir:dirs){
            int u=x+dir.first;
            int v=y+dir.second;
            if(in_grid(u,v,w,h)&&arr[u][v]!='#'&&!visited[u][v]){
                visited[u][v]=true;
                q.push(make_pair(u,v));
            }
        }
    }
    cout<<total<<endl;
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