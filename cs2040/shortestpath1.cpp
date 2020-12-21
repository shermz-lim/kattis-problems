#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

struct Edge{
    int v;
    int w;
};

struct Node{
    int dist;
    int u;
};

struct CompareDist{
    bool operator()(Node const& n1, Node const &n2){
        return n1.dist>n2.dist;
    }
};

void solve(int n, int m, int q, int s) {
    vector<Edge> adjList[n];
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adjList[u].push_back({v,w});
    }
    bool visited[n];
    int distances[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
        distances[i]=INT_MAX;
    }
    distances[s]=0;
    priority_queue<Node, vector<Node>, CompareDist> minDists;
    minDists.push({0,s});
    while(!minDists.empty()){
        Node u=minDists.top(); minDists.pop();
        visited[u.u]=true;
        for(Edge e:adjList[u.u]){
            if(!visited[e.v]){
                if(distances[u.u]+e.w<distances[e.v]){
                    distances[e.v]=distances[u.u]+e.w;
                    minDists.push({distances[e.v],e.v});
                }
            }
        }
    }
    for(int i=0;i<q;i++){
        int e;cin>>e;
        if(e>=n||distances[e]==INT_MAX){
            cout<<"IMPOSSIBLE"<<endl;
        }else{
            cout<<distances[e]<<endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,m,q,s;
    bool f=true;
    while(1){
        cin>>n>>m>>q>>s;
        if(n==0&&m==0&&q==0&&s==0) break;
        if(f){
            f=!f;
        }else{
            cout<<endl;
        }        
        solve(n,m,q,s);
    }
}