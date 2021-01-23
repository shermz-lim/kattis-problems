#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n,t;
    cin>>n>>t;
    vector<int> buts(n);
    for(int i=0;i<n;i++){
        cin>>buts[i];
    }
    vector<bool> visited(3601, false);
    vector<int> dists(3601, INT_MAX);
    dists[0]=0;
    visited[0]=true;
    queue<pair<int,int> > q;
    q.push(make_pair(0,0));
    while(!q.empty()){
        pair<int,int> u=q.front();
        q.pop();
        for(int but:buts){
            int v=u.first+but;
            v=v<0?0:min(v,3600);
            if(!visited[v]){
                visited[v]=true;
                dists[v]=u.second+1;
                q.push(make_pair(v,dists[v]));
            }
        }
    }
    for(int i=0;i<=3600;i++){
        if(visited[i]&&i>=t){
            cout<<dists[i]<<" "<<(i-t)<<endl;
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}