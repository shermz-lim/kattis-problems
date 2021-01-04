#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n,l,d,g;
    cin>>n>>l>>d>>g;
    double x1=l*g*d*n;
    double x2=M_PI*pow(g*d,2);
    double x3=l*tan(M_PI/2-M_PI/n)/2 * n * l/2;
    cout<<fixed;cout.precision(10);
    cout<<(x1+x2+x3)<<endl;
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