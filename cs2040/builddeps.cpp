#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>

using namespace std;

#define ar array
#define ll long long

void dfs(string u, unordered_map<string, vector<string> > &adj_list,
    unordered_set<string> &visited, stack<string> &s) {
    for (string v:adj_list[u]){
        if(visited.find(v)==visited.end()){
            visited.insert(v);
            dfs(v, adj_list, visited, s);
        }
    }
    s.push(u);
}

void solve() {
    int n;
    string line;    
    cin>>n;
    getline(cin, line);
    unordered_map<string, vector<string> > adj_list;
    while(n--){
        getline(cin, line);
        istringstream sin(line);
        string f;
        sin>>f;
        f = f.substr(0,f.size()-1);
        if(adj_list.find(f)==adj_list.end()) adj_list[f]=vector<string>();
        string dep;
        while(sin>>dep){
            if(adj_list.find(dep)==adj_list.end()) adj_list[dep]=vector<string>();
            adj_list[dep].push_back(f);
        }
    }
    string u;
    cin>>u;
    unordered_set<string> visited;
    stack<string> s;
    visited.insert(u);
    dfs(u, adj_list, visited, s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
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