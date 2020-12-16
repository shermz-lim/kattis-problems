#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n,p;
    cin>>n>>p;
    unsigned ll sum=0; unsigned ll maxi=0;
    for(int i=0;i<n;i++) {
        unsigned ll x;
        cin>>x;
        sum+=x;
        maxi=max(maxi,x);
    }
    for(int i=1;i<n;i++) {
        int k; cin>>k;
    }
    cout<<(sum+maxi*(p-1))<<endl;
}