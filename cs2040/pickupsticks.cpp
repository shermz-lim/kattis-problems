#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

bool has_cycle;

void dfs(int u, vector<bool> &visited,
    vector<bool> &visiting, vector<vector<int> > &adj_list,
    stack<int> &s){
    for(int v:adj_list[u]){
        if(visiting[v]){
            has_cycle=true;
        }
        if(!visited[v]){
            visited[v]=true;
            visiting[v]=true;
            dfs(v, visited, visiting, adj_list, s);
        }
    }
    visiting[u]=false;
    s.push(u);
}

void solve() {
    int n,m;
    cin>>n>>m;
    has_cycle=false;
    vector<vector<int> > adj_list(n+1, vector<int>());
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
    }
    vector<bool> visited(n+1);
    vector<bool> visiting(n+1);
    stack<int> s;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            visited[i]=true;
            visiting[i]=true;
            dfs(i, visited, visiting, adj_list, s);
        }
    }
    if(has_cycle){
        cout<<"IMPOSSIBLE"<<endl;
    }else{
        while(!s.empty()){
            cout<<s.top()<<endl;
            s.pop();
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