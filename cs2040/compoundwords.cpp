#include <bits/stdc++.h>
#include <set>

using namespace std;

#define ar array
#define ll long long

void solve() {
    string word;
    vector<string> words;
    while(cin>>word){
        words.push_back(word);
    }
    set<string> output;
    for(int i=0;i<words.size()-1;i++){
        for(int j=i+1;j<words.size();j++){
            output.insert(words[i]+words[j]);
            output.insert(words[j]+words[i]);
        }
    }
    for(string w:output){
        cout<<w<<endl;
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