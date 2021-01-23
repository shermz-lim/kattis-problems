#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

#define ar array
#define ll long long

string lower(string word){
    string newword="";
    for(int i=0;i<word.size();i++){
        newword.push_back(tolower(word[i]));
    }
    return newword;
}

void solve() {
    unordered_set<string> words;
    string line;
    while(getline(cin,line)){
        if(line=="") break;
        istringstream sin(line);
        string word;
        bool f=true;
        while(sin>>word){
            if(f){
                f=!f;
            }else{
                cout<<" ";
            }
            if(words.find(lower(word))!=words.end()){
                cout<<".";
            }else{
                cout<<word;
                words.insert(lower(word));
            }
        }
        cout<<endl;
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