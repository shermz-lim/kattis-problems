#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int q,m,s,l;
    cin>>q>>m>>s>>l;
    multiset<ll> pq;
    for(int i=0;i<m;i++){
        pq.insert(0);
    }
    while(l--){
        ll x=*pq.begin()+q;
        pq.erase(pq.begin());
        pq.insert(x);
    }
    while(s--){
        ll x=*pq.begin()+1;
        pq.erase(pq.begin());
        pq.insert(x);
    }
    cout<<(*pq.rbegin())<<endl;
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