#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    ll n,t;
    cin>>n>>t;
    ll arr[n];
    ll a,b,c,t0;
    cin>>a>>b>>c>>t0;
    arr[0]=t0;
    for(ll i=1;i<n;i++){
        arr[i]=((a*arr[i-1]+b)%c) + 1;
    }
    sort(arr,arr+n);
    int count=0;
    ll total=0;
    ll curr_time=0;
    for(ll i=0;i<n;i++){
        if(arr[i]+curr_time>t){
            break;
        }
        curr_time+=arr[i];
        total+=curr_time;
        total%=(1000000007);
        count++;
    }
    cout<<count<<" "<<total<<endl;
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