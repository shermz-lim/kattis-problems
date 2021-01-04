#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int k,b,n;
    cin>>k>>b>>n;
    ll t=0;
    while(n>0){
        t+=((n%b)*(n%b));
        n/=b;
    }
    cout<<k<<" "<<t<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}