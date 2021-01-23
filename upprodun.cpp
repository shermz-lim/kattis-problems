#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n,m;
    cin>>n>>m;
    int r=m%n;
    int d=m/n;
    for(int i=0;i<n;i++){
        int t=d;
        if(r>0){
            t++;
            r--;
        }
        for(int j=0;j<t;j++){
            cout<<'*';
        }
        cout<<endl;
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