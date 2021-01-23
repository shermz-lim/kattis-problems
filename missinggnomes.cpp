#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n,m;
    cin>>n>>m;
    vector<int> gnomes_ordered;
    set<int> missing;
    for(int i=1;i<=n;i++) missing.insert(i);
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        gnomes_ordered.push_back(x);
        missing.erase(x);
    }
    for(int i:gnomes_ordered){
        while(!missing.empty()&&*missing.begin()<i){
            cout<<*missing.begin()<<endl;
            missing.erase(*missing.begin());
        }
        cout<<i<<endl;
    }
    for(auto i=missing.begin();i!=missing.end();i++){
        cout<<*i<<endl;
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