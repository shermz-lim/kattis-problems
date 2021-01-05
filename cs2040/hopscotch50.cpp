#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

struct CustomCompare
{
    bool operator()(const pair<int, pair<int,int> >& lhs, const pair<int, pair<int,int> >& rhs)
    {
        return lhs.first > rhs.first;
    }
};

void solve() {
    int n,k;
    cin>>n>>k;
    vector<vector<bool> > solved(n, vector<bool>(n, false));
    vector<vector<int> > dists(n, vector<int>(n, INT_MAX));
    vector<vector<pair<int, int> > > colors(k, vector<pair<int,int> >());
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int c;
            cin>>c;
            c--;
            colors[c].push_back(make_pair(i,j));
            arr[i][j]=c;
        }
    }
    priority_queue<pair<int, pair<int,int> >,
        vector<pair<int, pair<int,int> > >, CustomCompare > pq;
    for(auto xy:colors[0]){
        pq.push(make_pair(0,xy));
        dists[xy.first][xy.second]=0;
    }
    while(!pq.empty()){
        auto node=pq.top();
        pq.pop();
        int dist=node.first;
        auto xy=node.second;
        if(solved[xy.first][xy.second]){
            continue;
        }        
        solved[xy.first][xy.second]=true;
        int c=arr[xy.first][xy.second];
        if(c==(k-1)){
            cout<<(dist)<<endl;
            return;
        }
        for(auto new_xy:colors[c+1]){
            if(!solved[new_xy.first][new_xy.second]){
                int new_dist=dist;
                new_dist += (abs(new_xy.first-xy.first) + abs(new_xy.second-xy.second));                                
                if(new_dist<dists[new_xy.first][new_xy.second]){
                    dists[new_xy.first][new_xy.second]=new_dist;
                    pq.push(make_pair(new_dist,new_xy));
                }
            }
        }
    }
    cout<<(-1)<<endl;
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