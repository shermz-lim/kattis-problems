#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int p,n;
    cin>>p>>n;
    unordered_set<string> parts;
    int d=-1;
    for(int i=1;i<=n;i++){
        string part;
        cin>>part;
        parts.insert(part);
        if(parts.size()==p&&d<0){
            d=i;
        }
    }
    cout<<(d<0?"paradox avoided":to_string(d))<<endl;
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