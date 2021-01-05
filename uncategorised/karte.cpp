#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    char pkht[4]={'P','K','H','T'};
    unordered_map<char,unordered_set<int> > table;
    for(char c:pkht){
        table[c]=unordered_set<int>();
    }
    int i=0;
    string line;
    getline(cin,line);
    while(i<line.size()){
        char s=line[i];
        int num=(line[i+1]-'0')*10+(line[i+2]-'0');
        if (table[s].count(num)!=0){
            cout<<"GRESKA"<<endl;
            return;
        }
        table[s].insert(num);
        i+=3;
    }
    for(char c:pkht){
        if(c!='P') cout<<" ";
        cout<<(13-table[c].size());
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