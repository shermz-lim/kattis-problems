#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void dfs(int u, vector<bool> &visited, vector<vector<int> > &adj_list){
    for(int v:adj_list[u]){
        if(!visited[v]){
            visited[v]=true;
            dfs(v, visited, adj_list);
        }
    }
}

void solve() {
    int n,m,l;
    cin>>n>>m>>l;
    vector<vector<int> > adj_list;
    adj_list.assign(n+1, vector<int>());
    while(m--){
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
    }
    vector<int> hand;
    while(l--){
        int z;
        cin>>z;
        hand.push_back(z);
    }
    vector<bool> visited;
    visited.assign(n+1, false);
    for(int e:hand){
        if(!visited[e]){
            visited[e]=true;
            dfs(e, visited, adj_list);
        }
    }
    cout<<(count(visited.begin(), visited.end(), true))<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}