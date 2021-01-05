#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    for(int i=0;i<3;i++){
        int x;
        cin>>x;
        x--;
        bool b1=x%(a+b)<a;
        bool b2=x%(c+d)<c;
        if(b1&&b2){
            cout<<"both"<<endl;
        }else if(b1||b2){
            cout<<"one"<<endl;
        }else{
            cout<<"none"<<endl;
        }
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