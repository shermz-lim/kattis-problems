#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    unordered_map<string, int> freq;
    int n;
    cin>>n;
    while(n--){
        string line;
        cin>>line;
        string digits="";
        for(char c:line){
            char button;
            if(c-'a'<=14){
                button=((c-'a')/3+2) + '0';
            }else if(c-'a'<=18){
                button='7';
            }else if(c-'a'<=21){
                button='8';
            }else{
                button='9';
            }
            digits.push_back(button);
        }
        freq[digits]++;
    }
    string s;
    cin>>s;
    cout<<(freq[s])<<endl;
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