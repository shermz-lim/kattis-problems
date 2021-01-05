#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    string s;
    cin>>s;
    cout<<s.size()<<" ";
    int x=0,y=0;
    for(int i=0;i<s.size();i++){
        char c=s[i];
        int mul=pow(2,s.size()-1-i);
        if(c=='0'){
            continue;
        }else if(c=='1'){
            x+=(mul);
        }else if(c=='2'){
            y+=(mul);
        }else if(c=='3'){
            x+=mul; y+=mul;
        }
    }
    cout<<x<<" "<<y<<endl;
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