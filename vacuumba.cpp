#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int m;
    cin>>m;
    float x=0,y=0;
    float dir=0;
    for(int i=0;i<m;i++){
        double ang,rang;
        cin>>ang>>rang;
        dir+=ang;
        x+=rang*sin(-dir*M_PI/180);
        y+=rang*cos(-dir*M_PI/180);
    }
    cout<<fixed;
    cout.precision(10);
    cout<<x<<" "<<y<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}