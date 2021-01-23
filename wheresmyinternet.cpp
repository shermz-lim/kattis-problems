#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n,m;
    cin>>n>>m;
    vector<int> adjList[n+1];
    for(int i=0;i<m;i++){
        int u,v; cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    bool visited[200001]={false};
    queue<int> q;
    q.push(1);
    visited[1]=true;
    while(!q.empty()){
        int node=q.front(); q.pop();
        for(int neigh:adjList[node]){
            if(!visited[neigh]){
                visited[neigh]=true;
                q.push(neigh);
            }
        }
    }
    vector<int> nc;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            nc.push_back(i);
        }
    }
    if(nc.size()==0){
        cout<<"Connected"<<endl;
    }else{
        for(int i=0;i<nc.size();i++){
            cout<<nc[i]<<endl;
        }
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