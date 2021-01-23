#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void recurse(vector<vector<int> > &next, string strings[], int curr){
    cout<<strings[curr];
    for(int idx:next[curr]){
        recurse(next, strings, idx);
    }
}

void solve() {
    int n;
    cin>>n;
    string arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    vector<vector<int> > next;
    next.assign(n+1, vector<int>());
    int last=1;
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        next[a].push_back(b);
        if(i==n-2) last=a;
    }
    recurse(next, arr, last);
    cout<<endl;
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