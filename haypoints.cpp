#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int m,n;
    cin>>m>>n;
    unordered_map<string,ll> table;
    for(int i=0;i<m;i++){
        string desc; ll amt;
        cin>>desc>>amt;
        table[desc]=amt;
    }
    string line;
    getline(cin,line);
    for(int i=0;i<n;i++){
        ll t=0;
        while(getline(cin,line)){
            if(line==".") break;            
            istringstream sin(line);
            string word;
            while(sin>>word){
                if(table.find(word)!=table.end()){
                    t+=table[word];
                }
            }
        }
        cout<<t<<endl;
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