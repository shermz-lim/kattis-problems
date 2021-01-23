#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    string line;
    unordered_map<string,string> dict;
    while(1){
        getline(cin,line);
        if(line=="") break;
        istringstream sin(line);
        string el,fl;
        sin>>el>>fl;
        dict[fl]=el;
    }
    while(1){
        getline(cin,line);
        if(line=="") break;
        if(dict.find(line)!=dict.end()){
            cout<<dict.at(line)<<endl;
        }else{
            cout<<"eh"<<endl;
        }     
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