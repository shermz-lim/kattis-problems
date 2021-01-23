#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    string line;
    getline(cin,line);
    string o="";
    char curr=' ';
    for(char c:line){
        if(c==curr){
            continue;
        }else{
            o.push_back(c);
            curr=c;
        }
    }
    cout<<o<<endl;
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