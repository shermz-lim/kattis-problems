#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        ll l,r;
        cin>>l>>r;
        ll n=l+r;
        cout<<(1 + (n*(n+1))/2 + r)<<endl;
    }
}