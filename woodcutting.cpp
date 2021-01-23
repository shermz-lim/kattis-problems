#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n;
    cin>>n;
    vector<ll> arr;
    for(int i=0;i<n;i++){
        int w;
        cin>>w;
        ll tot=0;
        while(w--){
            ll wi; cin>>wi;
            tot+=wi;
        }
        arr.push_back(tot);
    }
    sort(arr.begin(),arr.end());
    ll tot_wait=0;
    for(int i=0;i<n;i++){
        tot_wait+=(arr[i]*(n-i));
    }
    cout<<fixed;
    cout.precision(10);
    cout<<((double)tot_wait/n)<<endl;
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