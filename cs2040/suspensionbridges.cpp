#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    double d,s;
    cin>>d>>s;
    double low=0;
    double high=1000000;
    while(1){
        double a=(high-low)/2+low;
        double res=a*(cosh(d/2/a)-1);
        if(abs(res-s)<10e-8){
            break;
        } else if(res<s){
            high=a;
        }else{
            low=a;
        }
    }
    double a=(high-low)/2+low;
    double l=2*a*sinh(d/2/a);
    cout<<fixed;
    cout.precision(10);
    cout<<l<<endl;
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