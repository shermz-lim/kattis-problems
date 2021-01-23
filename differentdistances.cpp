#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    float x1,y1,x2,y2,p;
    while(cin>>x1, x1!=0){
        cin>>y1>>x2>>y2>>p;
        float x=pow(abs(x1-x2),p);
        float y=pow(abs(y1-y2),p);
        cout<<fixed; cout.precision(10);
        cout<<(pow(x+y,1/p))<<endl;
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