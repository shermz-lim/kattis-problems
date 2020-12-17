#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve(int n) {
    bool adj[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>adj[i][j];
        }
    }
    vector<int> weaks;
    for(int i=0;i<n;i++){
        bool weak=true;
        for(int j=0;j<n;j++){
            if(adj[i][j]){
                for(int k=0;k<n;k++){
                    if(adj[i][k]&&adj[j][k]){
                        weak=false;
                    }
                }
            }
        }
        if(weak) weaks.push_back(i);
    }
    sort(weaks.begin(),weaks.end());
    for(int i=0;i<weaks.size();i++){
        cout<<weaks[i];
        if(i!=weaks.size()-1) cout<<" ";
    }
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    while(1){
        cin>>n;
        if(n==-1) break;
        solve(n);
    }
}