#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

struct Node{
    int node;
    int dist;
};

struct comp{
    bool operator()(Node n1, Node n2){
        return n1.dist > n2.dist;
    }
};

void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<pair<int,int> > > adj_list(n+1);
    vector<int> dists(n+1, INT_MAX);
    vector<bool> solved(n+1, false);
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        adj_list[a].push_back(make_pair(b,c));
        adj_list[b].push_back(make_pair(a,c));
    }
    priority_queue<Node, vector<Node>, comp> pq;
    pq.push({1,0});    
    dists[1]=0;
    while(!pq.empty()){
        Node u=pq.top();
        pq.pop();
        if(solved[u.node]){
            continue;
        }
        solved[u.node]=true;
        for(pair<int,int> neigh:adj_list[u.node]){
            int v=neigh.first;
            int new_dist=dists[u.node]+neigh.second;
            if(!solved[v]&&new_dist<dists[v]){
                dists[v]=new_dist;
                pq.push({v,new_dist});
            }
        }
    }
    cout<<(dists[n])<<endl;
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