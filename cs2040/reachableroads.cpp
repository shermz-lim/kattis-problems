#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n,m;
    cin>>n>>m;
    vector<int> adjList[n];
    for(int i=0;i<m;i++){
        int u,v; cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    bool visited[10000]={false};
    int cc=0;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            cc++;
            queue<int> q;
            q.push(i);
            visited[i]=true;
            while(!q.empty()){
                int node=q.front(); q.pop();
                for(int neigh:adjList[node]){
                    if(!visited[neigh]){
                        visited[neigh]=true;
                        q.push(neigh);
                    }
                }
            }
        }
    }
    cout<<(cc-1)<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}