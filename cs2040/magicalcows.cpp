#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int c,n,m;
    cin>>c>>n>>m;
    unordered_map<int,ll> freq;
    for(int i=0;i<n;i++){
        int ci;
        cin>>ci;
        freq[ci]++;
    }
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    ll res[51];
    for(int i=0;i<=50;i++){
        ll t=0;
        for(auto it:freq){
            t+=it.second;
        }
        res[i]=t;
        unordered_map<int,ll> next_freq;
        for(auto it:freq){
            if(it.first*2>c){
                next_freq[it.first]+=(it.second*2);
            }else{
                next_freq[it.first*2]+=it.second;
            }
        }
        freq=next_freq;
    }
    for(int dj:arr){
        cout<<res[dj]<<endl;
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