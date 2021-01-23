#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int b,d,c,l;
    cin>>b>>d>>c>>l;
    bool y=false;
    for(int i=0;i<=l;i++){
        for(int j=0;j<=l;j++){
            for(int k=0;k<=l;k++){
                if((b*i+d*j+c*k)==l){
                    y=true;
                    cout<<i<<" "<<j<<" "<<k<<endl;
                }
            }            
        }        
    }
    if(!y){
        cout<<"impossible"<<endl;
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