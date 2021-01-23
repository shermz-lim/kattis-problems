#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

struct Node{
    int v;
    int dist;
    int numItems;
};

struct CompareDist{
    bool operator()(Node const& n1, Node const &n2){
        if(n1.dist==n2.dist){
            return n1.numItems<n2.numItems;
        }else{
            return n1.dist>n2.dist;
        }
    }
};

void solve() {
    int n;
    cin>>n;
    int items[n+1]; bool visited[n+1];
    int dists[n+1], numItems[n+1];
    for(int i=1;i<=n;i++){
        int ti;
        cin>>ti;
        items[i]=ti;
        visited[i]=false;
        dists[i]=INT_MAX;
        numItems[i]=INT_MAX;
    }
    int m;
    cin>>m;
    vector<pair<int, int> > adjList[n+1];
    for(int i=0;i<m;i++){
        int a,b,d;
        cin>>a>>b>>d;
        adjList[a].push_back(make_pair(b,d));
        adjList[b].push_back(make_pair(a,d));
    }
    priority_queue<Node, vector<Node>, CompareDist> pq;
    pq.push({1,0,items[1]});
    dists[1]=0;
    numItems[1]=items[1];
    while(!pq.empty()){
        Node u=pq.top(); pq.pop();
        if(!visited[u.v]){
            visited[u.v]=true;
            if(u.v==n){
                cout<<u.dist<<" "<<u.numItems<<endl; return;
            }
            for(auto e:adjList[u.v]){
                if(!visited[e.first]){
                    bool relax=(
                        (u.dist+e.second<dists[e.first])
                        || (u.dist+e.second==dists[e.first]&&(u.numItems+items[e.first])>numItems[e.first])
                    );
                    if(relax){
                        dists[e.first]=u.dist+e.second;
                        numItems[e.first]=u.numItems+items[e.first];
                        pq.push({e.first,dists[e.first],numItems[e.first]});
                    }
                }
            }
        }
    }
    cout<<"impossible"<<endl;
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