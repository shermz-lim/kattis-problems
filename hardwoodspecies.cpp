#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    string line;
    map<string,int> freq;
    int t=0;
    while(getline(cin,line)){
        freq[line]++;
        t++;
    }
    for(auto it:freq){
        cout<<it.first<<" ";
        cout<<((double)it.second/t*100)<<endl;
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