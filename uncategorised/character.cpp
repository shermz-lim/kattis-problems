#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

int recur(int n){
    if(n==0||n==1){
        return 0;
    }
    return pow(2,n-1)-1+recur(n-1);
}

void solve() {
    int n;
    cin>>n;
    cout<<recur(n)<<endl;
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