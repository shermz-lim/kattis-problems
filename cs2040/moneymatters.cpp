#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n,m;
    cin>>n>>m;
    vector<int> adjList[n];
    int moneyLeft[n];
    for(int i=0;i<n;i++){
        cin>>moneyLeft[i];
    }
    for(int i=0;i<m;i++){
        int u,v; cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    bool visited[10000]={false};
    for(int i=0;i<n;i++){
        if(!visited[i]){
            int sum=0;
            queue<int> q;
            q.push(i);
            visited[i]=true;
            while(!q.empty()){
                int node=q.front(); q.pop();
                sum+=moneyLeft[node];
                for(int neigh:adjList[node]){
                    if(!visited[neigh]){
                        visited[neigh]=true;
                        q.push(neigh);
                    }
                }
            }
            if(sum!=0){
                cout<<"IMPOSSIBLE"<<endl;return;
            }
        }
    }
    cout<<"POSSIBLE"<<endl;
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