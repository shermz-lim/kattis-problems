#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int k;
    cin>>k;
    vector<vector<int> > adj_list(101, vector<int>());
    string line;
    while(getline(cin,line)){
        if(line=="-1") break;
        istringstream sin(line);
        int a,b;
        sin>>a;
        while(sin>>b){
            adj_list[b].push_back(a);
        }
    }
    queue<int> q;
    q.push(k);
    cout<<k;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v:adj_list[u]){
            cout<<" "<<v;
            q.push(v);
        }
    }
    cout<<endl;
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