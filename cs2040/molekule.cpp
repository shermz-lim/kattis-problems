#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n;
    cin>>n;
    unordered_map<int,vector<int> > adj_list;
    unordered_map<int,char> color;
    vector<pair<int,int> > edge_list;
    for(int i=1;i<=n;i++){
        color[i]='W';
        adj_list[i]=vector<int>();
    }
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
        edge_list.push_back(make_pair(u,v));
    }
    for(int i=1;i<=n;i++){
        if(color[i]=='W'){
            // run bfs
            queue<int> q;
            q.push(i);
            color[i]='R';
            while(!q.empty()){
                int u=q.front();
                q.pop();                
                char uc=color[u];
                for(int v:adj_list[u]){
                    char vc=color[v];
                    if(vc=='W'){
                        color[v]=uc=='R'?'B':'R';
                        q.push(v);
                    }
                }
            }
        }
    }
    for(auto it:edge_list){
        if(color[it.first]=='R'){
            cout<<0<<endl;
        }else{
            cout<<1<<endl;
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