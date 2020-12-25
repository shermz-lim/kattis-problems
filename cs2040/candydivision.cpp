#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    unsigned ll n;
    cin>>n;
    set<unsigned ll> divs;
    for(unsigned ll i=1;i*i<=n;i++){
        if(n%i==0){
            divs.insert(i);
            divs.insert(n/i);
        }
    }
    unsigned ll idx=0;
    for(set<unsigned ll>::iterator i=divs.begin();i!=divs.end();i++){
        if(idx>0) cout<<" ";
        cout<<(*i-1);
        idx++;
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