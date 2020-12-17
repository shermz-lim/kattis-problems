#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    ll n;
    cin>>n;
    ll hor=n/2+1;
    ll vert=(n%2==0)?(n/2+1):(n/2+2);
    cout<<hor*vert<<endl;
}