#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int h;
    cin>>h;
    string path="";
    cin>>path;
    int idx=pow(2,h+1)-1;
    int tot=0;
    for(int i=0;i<path.size();i++){
        char c=path[i];
        int curr;
        if(c=='R'){
            curr=tot+2;
        }else{
            curr=tot+1;
        }
        tot+=curr;
        idx-=curr;
    }
    cout<<idx<<endl;
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