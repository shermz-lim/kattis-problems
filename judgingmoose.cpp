#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int l,r;
    cin>>l>>r;
    if (l + r == 0) {
        cout<<"Not a moose";
    } else if (l == r) {
        cout<<"Even "<<l*2;
    } else {
        cout<<"Odd "<<max(l,r)*2;
    }
    cout<<endl;
}