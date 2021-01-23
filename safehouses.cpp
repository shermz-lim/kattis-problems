#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n;
    cin>>n;
    vector<pair<int, int> > spies;
    vector<pair<int, int> > houses;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char c; cin>>c;
            if(c=='S'){
                spies.push_back(make_pair(i, j));
            }else if(c=='H'){
                houses.push_back(make_pair(i, j));
            }
        }
    }
    int max_dist=0;
    for(auto s:spies){
        int min_dist=INT_MAX;
        for(auto h:houses){
            int dist=abs(h.first - s.first) + abs(h.second - s.second);
            min_dist=min(min_dist,dist);
        }
        max_dist=max(max_dist,min_dist);
    }
    cout<<max_dist<<endl;
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