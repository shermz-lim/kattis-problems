#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    unordered_map<char,int> freq;
    string line;
    getline(cin,line);
    for(char c:line){
        freq[c]++;
    }
    int t=0;
    for(auto it:freq){
        if(it.second%2!=0){
            t++;
        }
    }
    t--;
    cout<<max(0,t)<<endl;
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