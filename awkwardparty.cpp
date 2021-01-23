#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n;
    cin>>n;
    unordered_map<int,vector<int> > lang_idx;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(lang_idx.find(x)==lang_idx.end()){
            lang_idx[x]=vector<int>();
        }
        lang_idx[x].push_back(i);
    }
    int awks=n;
    for(auto it=lang_idx.begin();it!=lang_idx.end();it++){
        vector<int> &idxs=it->second;
        for(int i=0;i<idxs.size()-1;i++){
            int dist=idxs[i+1]-idxs[i];
            awks=min(awks, dist);
        }
    }
    cout<<awks<<endl;
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