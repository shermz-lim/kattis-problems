#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    cin>>n;
    int ts=0,bs=0,ls=0,rs=0;
    for (int i=0;i<n;i++){
        char t,b,l,r;
        cin>>t>>b>>l>>r;
        ts += (1-(t-'0'));
        bs += (1-(b-'0'));
        ls += (1-(l-'0'));
        rs += (1-(r-'0'));
    }
    int tbs=ts+bs;
    int lrs=ls+rs;
    int num=min(tbs/2,lrs/2);
    cout<<(num)<<" "<<(tbs-num*2)<<" "<<(lrs-num*2)<<endl;
}