#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void dfs(char u,
    unordered_map<char, unordered_set<char> > &adj_list,
    unordered_set<char> &visited) {
    for(char v:adj_list[u]){
        if(visited.find(v)==visited.end()){
            visited.insert(v);
            dfs(v,adj_list,visited);
        }
    }
}    

void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    unordered_map<char, unordered_set<char> > adj_list;
    for(int i=0;i<k;i++){
        adj_list['A'+i]=unordered_set<char>();
    }
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<m;j++){
        unordered_set<char> s;
        for(int i=0;i<n;i++){
            s.insert(arr[i][j]);
        }
        for(auto a=s.begin();a!=s.end();a++){
            for(auto b=next(a);b!=s.end();b++){
                adj_list[*a].insert(*b);
                adj_list[*b].insert(*a);
            }
        }
    }
    unordered_set<char> visited;
    int cc=0;
    for(int i=0;i<k;i++){
        char c='A'+i;
        if(visited.find(c)==visited.end()){
            cc++;
            visited.insert(c);
            dfs(c,adj_list,visited);
        }
    }
    cout<<cc<<endl;
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