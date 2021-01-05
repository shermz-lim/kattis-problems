#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    double r,m,c;
    while(cin>>r>>m>>c){
        if((r+m+c)==0) break;
        cout<<fixed; cout.precision(8);
        cout<<(M_PI*pow(r,2))<<" ";
        cout<<(c/m*pow(2*r,2))<<endl;
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