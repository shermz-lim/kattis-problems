#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n;
    cin>>n;
    priority_queue<int> q;
    for(int i=0;i<3*n;i++){
        int p; cin>>p;
        q.push(p);
    }
    int total=0;
    while(n--){
        q.pop();
        total+=q.top();
        q.pop();
    }
    cout<<total<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}