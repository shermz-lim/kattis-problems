#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

bool has_cycle(string u, unordered_set<string> &visited, unordered_set<string> &visiting,
    unordered_map<string,unordered_set<string> > &adj_list){
    bool has=false;
    for(string v:adj_list[u]){
        if(visited.find(v)==visited.end()){
            visited.insert(v);
            visiting.insert(v);
            if(has_cycle(v, visited, visiting, adj_list)){
                return true;
            }
            visiting.erase(v);
        }else if(visiting.find(v)!=visiting.end()){
            return true;
        }
    }
    return false;
}

void solve() {
    int n;
    cin>>n;
    unordered_map<string,unordered_set<string> > adj_list;
    for(int i=0;i<n;i++){
        string o,d;
        cin>>o>>d;
        if(adj_list.find(o)==adj_list.end()){
            adj_list[o]=unordered_set<string>();
        }
        if(adj_list.find(d)==adj_list.end()){
            adj_list[d]=unordered_set<string>();
        }
        adj_list[o].insert(d);
    }
    string start;
    while(cin>>start){
        if(adj_list.find(start)==adj_list.end()) break;
        unordered_set<string> visited;
        unordered_set<string> visiting;
        visited.insert(start);
        visiting.insert(start);
        cout<<start<<" ";
        if(has_cycle(start, visited, visiting, adj_list)){
            cout<<"safe"<<endl;
        }else{
            cout<<"trapped"<<endl;
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