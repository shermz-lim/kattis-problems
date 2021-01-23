#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

bool visited[501][501];
int arr[501][501];

struct Node{
    int moves;
    int x;
    int y;
};

void solve() {
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        string line; cin>>line;
        for(int j=0;j<m;j++){
            arr[i][j]=line[j]-'0';
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            visited[i][j]=false;
        }
    }    
    queue<Node> q;
    Node start={0,0,0};
    q.push(start);
    visited[0][0]=true;
    while(!q.empty()){
        Node node=q.front(); q.pop();
        int x=node.x,y=node.y;
        if(x==n-1&&y==m-1){
            cout<<node.moves<<endl;return;
        }
        int jump=arr[x][y];
        for(int i=x-jump;i<=x+jump;i+=(2*jump)){
            if(i>=0&&i<n&&!visited[i][y]){
                Node newNode={node.moves+1,i,y};
                visited[i][y]=true;
                q.push(newNode);
            }
        }
        for(int j=y-jump;j<=y+jump;j+=(2*jump)){
            if(j>=0&&j<m&&!visited[x][j]){
                Node newNode={node.moves+1,x,j};
                visited[x][j]=true;
                q.push(newNode);
            }
        }        
    }
    cout<<-1<<endl;
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
