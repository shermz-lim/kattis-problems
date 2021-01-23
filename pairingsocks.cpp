#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n;
    cin>>n;
    deque<ll> o;
    stack<ll> a;
    for(int i=0;i<(2*n);i++){
        ll x; cin>>x;
        o.push_front(x);
    }
    ll moves=0;
    while(!o.empty()){
        moves++;
        if(!a.empty()&&a.top()==o.back()){
            a.pop();
            o.pop_back();
        }else{
            a.push(o.back());
            o.pop_back();
        }
    }
    cout<<(a.empty()?to_string(moves):"impossible")<<endl;
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