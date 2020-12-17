#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n;
    cin>>n;
    string line; getline(cin,line);
    unordered_map<string, vector<string> > adjList;
    for(int i=0;i<n;i++){
        getline(cin,line);
        istringstream sin(line);
        string u,v;
        sin>>u;
        while(sin>>v){
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
    }
    string start,dest;
    cin>>start>>dest;
    queue<string> q;
    q.push(start);
    unordered_set<string> visited;
    visited.insert(start);
    unordered_map<string,string> parents;
    parents[start]="";
    while(!q.empty()){
        string node=q.front(); q.pop();
        if(node==dest){
            stack<string> order;            
            string curr=dest;
            while(curr!=""){
                order.push(curr);
                curr=parents[curr];
            }
            bool f=true;
            while(!order.empty()){
                if(f){f=!f;}else{cout<<" ";}
                cout<<order.top();
                order.pop();
            }
            cout<<endl;
            return;
        }
        for(string neigh:adjList[node]){
            if(visited.find(neigh)==visited.end()){
                parents[neigh]=node;
                visited.insert(neigh);
                q.push(neigh);
            }
        }
    }
    cout<<"no route found"<<endl;
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