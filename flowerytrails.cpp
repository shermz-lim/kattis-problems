#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

struct Node {
    int u;
    int dist;
};

struct Edge {
    int v;
    int w;
};

struct CompareDist{
    bool operator()(Node const &n1, Node const &n2){
        return n1.dist>n2.dist;
    }
};

ll get_routes(int u, vector<bool> &visited, vector<vector<Edge> > &parents){
    ll tot=0;
    for(Edge e:parents[u]){
        tot += e.w;
        if(!visited[e.v]){
            visited[e.v]=true;
            tot += get_routes(e.v, visited, parents);
        }
    }
    return tot;
}

void solve() {
    int p,t;
    cin>>p>>t;
    vector<vector<Edge> > adj_list(p);
    vector<vector<Edge> > parents(p);
    vector<int> dists(p, INT_MAX);
    vector<bool> solved(p, false);
    while(t--){
        int u,v,w;
        cin>>u>>v>>w;
        adj_list[u].push_back({v,w});
        adj_list[v].push_back({u,w});
    }
    priority_queue<Node, vector<Node>, CompareDist> pq;
    pq.push({0, 0});
    dists[0]=0;
    while(!pq.empty()){
        Node node=pq.top();
        pq.pop();
        if(solved[node.u]){
            continue;
        }
        solved[node.u]=true;
        for(Edge edge:adj_list[node.u]){
            int new_dist=node.dist+edge.w;
            if(new_dist<dists[edge.v]){
                dists[edge.v]=new_dist;
                parents[edge.v]=vector<Edge>(1, {node.u,edge.w});
                pq.push({edge.v,new_dist});
            }else if(new_dist==dists[edge.v]){
                parents[edge.v].push_back({node.u,edge.w});
            }
        }
    }
    vector<bool> visited(p, false);
    visited[p-1]=true;
    cout<<(get_routes(p-1, visited, parents)*2)<<endl;
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