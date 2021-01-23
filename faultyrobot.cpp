#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n,m;
    cin>>n>>m;
    vector<pair<int,int> > adj_list[2][n];
    for(int i=0;i<n;i++){
        adj_list[0][i]=vector<pair<int, int> >();
        adj_list[0][i].push_back(make_pair(1,i));
        adj_list[1][i]=vector<pair<int, int> >();
    }
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        if(a<0){
            a=-a; a--; b--;
            adj_list[0][a].push_back(make_pair(0,b));
            adj_list[1][a].push_back(make_pair(1,b));
        }else{
            a--; b--;
            adj_list[0][a].push_back(make_pair(1,b));
        }
    }
    queue<pair<int,int> > q;
    vector<vector<bool > > visited(2, vector<bool>(n, false));
    vector<bool> stop(n, false);
    visited[0][0]=true;
    q.push(make_pair(0,0));
    while(!q.empty()){
        auto node=q.front();
        q.pop();
        if(node.first==1&&adj_list[node.first][node.second].size()==0){
            stop[node.second]=true;
        }
        for(auto v:adj_list[node.first][node.second]){
            if(!visited[v.first][v.second]){
                visited[v.first][v.second]=true;
                q.push(v);
            }
        }
    }
    int tot=0;
    for(int i=0;i<n;i++){
        if(stop[i]){
            tot++;
        }
    }
    cout<<tot<<endl;
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