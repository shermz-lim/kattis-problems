#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

#define ar array
#define ll long long

void solve() {
    string rec;
    getline(cin, rec);
    unordered_set<string> sounds;
    while(1){
        string line;
        getline(cin,line);
        if(line=="what does the fox say?") break;
        istringstream sin(line);
        string a,sound;
        sin>>a>>sound>>sound;
        sounds.insert(sound);
    }
    istringstream recstream(rec);
    string s;
    bool f=true;
    while(recstream>>s){        
        if(sounds.find(s)==sounds.end()){
            if(f) { f=!f; } else {cout<<" ";}
            cout<<s;
        }
    }
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;
    string line; getline(cin,line);
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}