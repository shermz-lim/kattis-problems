#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n,h,l;
    cin>>n>>h>>l;
    queue<int> q;
    vector<bool> visited(n, false);
    vector<vector<int> > adj_list(n, vector<int>());
    vector<int> dists(n, INT_MAX);
    while(h--){
        int hi;
        cin>>hi;
        q.push(hi);
        visited[hi]=true;
        dists[hi]=0;
    }
    while(l--){
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v:adj_list[u]){
            if(!visited[v]){
                visited[v]=true;
                dists[v]=dists[u]+1;
                q.push(v);
            }
        }
    }
    int high=*max_element(dists.begin(), dists.end());
    for(int i=0;i<n;i++){
        if(dists[i]==high){
            cout<<i<<endl;
            return;
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