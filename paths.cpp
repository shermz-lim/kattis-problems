#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

int dp[5][300000][32]={0};

void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int> > adj_list(n, vector<int>());
    vector<int> colors(n);
    for(int i=0;i<n;i++){
        cin>>colors[i];
        colors[i]--;
    }
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--; b--;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    for(int i=0;i<n;i++){
        int color=colors[i];
        dp[0][i][1<<color]=1;
    }
    ll tot=0;
    for(int i=1;i<5;i++){
        for(int u=0;u<n;u++){
            int color=colors[u];
            for(int v:adj_list[u]){
                for(int j=0;j<32;j++){
                    if(!(j&(1<<color))){
                        int new_colors=j|(1<<color);
                        dp[i][u][new_colors]+=dp[i-1][v][j];
                        tot+=(dp[i-1][v][j]);
                    }
                }
            }
        }
    }
    cout<<tot<<endl;
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