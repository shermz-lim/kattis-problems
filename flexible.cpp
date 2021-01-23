#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int w,p;
    cin>>w>>p;
    vector<int> arr;
    arr.push_back(0);
    while(p--){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    arr.push_back(w);
    set<int> s;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            s.insert(arr[j]-arr[i]);
        }
    }
    int idx=0;
    for(int i:s){
        if(idx>0) cout<<" ";
        cout<<i;
        idx++;
    }
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