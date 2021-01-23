#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    string line;
    getline(cin,line);
    int n=stoi(line);
    int tot=0;
    for(int i=0;i<n;i++){
        getline(cin,line);
        bool win=true;
        for(int j=0;j<line.size()-1;j++){
            if(line[j]=='C'&&line[j+1]=='D'){
                win=false;
            }
        }
        if(win) tot++;
    }
    cout<<tot<<endl;
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