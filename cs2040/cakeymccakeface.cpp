#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n,m;
    cin>>n>>m;
    ll entry[n];
    ll exit[m];
    for(int i=0;i<n;i++) cin>>entry[i];
    for(int i=0;i<m;i++) cin>>exit[i];
    map<ll, ll> freq;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(entry[i]<=exit[j]){
                freq[(exit[j]-entry[i])]++;
            }
        }
    }
    ll v=0;
    for(auto it:freq){
        v=max(v, it.second);
    }
    for(auto it:freq){
        if(it.second==v){
            cout<<it.first<<endl;
            return;
        }
    }
    cout<<0<<endl;
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