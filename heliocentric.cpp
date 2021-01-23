#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

int e,m;

void solve() {
    int i=0;
    while(e!=0||m!=0){
        e++;
        m++;
        e%=365;
        m%=687;
        i++;
    }
    cout<<i<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    while(cin>>e>>m){
        cout<<"Case "<<tc<<": ";
        solve();
        tc++;
    }
}