#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int p,q,s;
    cin>>p>>q>>s;
    for(int i=1;i<=s;i++){
        if(i%p==0&&i%q==0){
            cout<<"yes"<<endl;
            return;
        }
    }
    cout<<"no"<<endl;
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