#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int c,p,x,l;
    cin>>c>>p>>x>>l;
    vector<vector<int> > adjList;
    vector<int> degs;
    vector<bool> left;
    adjList.assign(c+1, vector<int>());
    degs.assign(c+1,0);
    left.assign(c+1,false);
    for(int i=0;i<p;i++){
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
        degs[u]++; degs[v]++;     
    }
    queue<int> q;
    q.push(l);
    left[l]=true;
    while(!q.empty()){
        int u=q.front(); q.pop();
        if(u==x){
            cout<<"leave"<<endl; return;
        }
        for(int v:adjList[u]){
            if(!left[v]){
                degs[v]--;
                if(degs[v]<=adjList[v].size()/2){
                    left[v]=true;
                    q.push(v);
                }
            }
        }
    }
    cout<<"stay"<<endl;
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