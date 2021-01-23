#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void dfs(int u, vector<vector<int > > &adj_list, vector<bool> &visited, vector<int> &typ){
    for(int v:adj_list[u]){
        if(!visited[v]){
            visited[v]=true;
            typ[v]=(typ[u]==1)?0:1;
            dfs(v,adj_list,visited,typ);
        }
    }
}

void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<int > > adj_list(n,vector<int>());
    while(m--){
        int x,y;
        cin>>x>>y;
        x--; y--;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }
    vector<bool> visited(n, false);
    vector<int> typ(n,0);
    for(int i=0;i<n;i++){
        if(adj_list[i].size()==0){
            cout<<"Impossible"<<endl;
            return;
        }
    }
    for(int i=0;i<n;i++){
        if(!visited[i]){
            visited[i]=true;
            typ[i]=0;
            dfs(i,adj_list,visited,typ);
        }
    }
    for(int i=0;i<n;i++){
        if(i>0) cout<<" ";
        cout<<(typ[i]==0?"pub":"house");
    }
    cout<<endl;
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