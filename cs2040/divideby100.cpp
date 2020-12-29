#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    string n,m;
    cin>>n>>m;
    int t=m.size()-1;
    string dec="";
    bool trailing=true;
    while(t--){
        if(n.empty()){
            dec.push_back('0');
            continue;
        }
        char d=n.back(); n.pop_back();
        if(d=='0'){
            if(!trailing){
                dec.push_back(d);
            }
        }else{
            trailing=false;
            dec.push_back(d);
        }
    }
    reverse(dec.begin(),dec.end());
    cout<<(n.empty()?"0":n);
    cout<<(dec.empty()?"":"."+dec)<<endl;
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