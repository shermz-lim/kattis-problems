#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    string line;
    getline(cin, line);
    bool arr[26] = {false};
    for(int i=0;i<line.size();i++){
        char c=tolower(line[i]);
        if(c>='a'&&c<='z'){
            arr[c-'a']=true;
        }
    }
    vector<char> missing;
    for(int i=0;i<26;i++){
        if(!arr[i]){
            char c='a'+i;
            missing.push_back(c);
        }
    }
    if(missing.size()==0){
        cout<<"pangram"<<endl;
    }else{
        cout<<"missing ";
        for(char c:missing)cout<<c;
        cout<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;
    string s; getline(cin,s);
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}