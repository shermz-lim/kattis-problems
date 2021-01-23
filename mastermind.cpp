#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n;
    cin>>n;
    string c,g;
    cin>>c>>g;
    vector<int> cc(26,0);
    vector<int> cg(26,0);
    int r=0;
    for(int i=0;i<n;i++){
        if(c[i]==g[i]){
            r++;
        }else{
            cc[c[i]-'A']++;
            cg[g[i]-'A']++;
        }
    }
    int s=0;
    for(int i=0;i<26;i++){
        s+=min(cc[i],cg[i]);
    }
    cout<<r<<" "<<s<<endl;
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