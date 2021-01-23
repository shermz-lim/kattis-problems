#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int k;
    cin>>k;
    int a=1,b=0;
    for(int i=0;i<k;i++){
        int temp_b=a+b;
        int temp_a=b;
        a=temp_a;
        b=temp_b;
    }
    cout<<a<<" "<<b<<endl;
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