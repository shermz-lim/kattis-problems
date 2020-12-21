#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

bool visited[10000]; double dists[10000];

int getMinNode(int n){
    double minDist=DBL_MAX;
    int minDistIdx;
    for(int i=0;i<n;i++){
        if(!visited[i]&&dists[i]<minDist){
            minDist=dists[i];
            minDistIdx=i;
        }
    }
    return minDistIdx;
}

struct Edge{
    int v;
    double weight;
};

void solve(int n, int m) {
    vector<Edge> adjList[n];
    for(int i=0;i<m;i++){
        int x,y; double f;
        cin>>x>>y>>f;
        double weight=-log(f);
        Edge exy={y,weight};
        Edge eyx={x,weight};
        adjList[x].push_back(exy);
        adjList[y].push_back(eyx);
    }
    for(int i=0;i<n;i++){
        visited[i]=false; dists[i]=DBL_MAX;
    }
    dists[0]=0;    
    while(1){
        int u=getMinNode(n);
        visited[u]=true;
        if(u==n-1){
            cout<<fixed; cout.precision(4);
            cout<<exp(-1*dists[u])<<endl;
            return;
        }
        for(Edge e:adjList[u]){
            if(dists[u]+e.weight<dists[e.v]){
                dists[e.v]=dists[u]+e.weight;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,m;
    while(1){
        cin>>n>>m;
        if(n==0&&m==0) break;
        solve(n,m);
    }
}