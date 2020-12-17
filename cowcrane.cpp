#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    ll m,l,M,L,tm,tl;
    cin>>m>>l>>M>>L>>tm>>tl;
    bool possible=false;
    ll mM=abs(m)+abs(M-m);
    ll lL=abs(l)+abs(L-l);
    if(mM<=tm&&(mM+abs(l-M)+abs(L-l)<=tl)) possible=true;
    if(lL<=tl&&(lL+abs(m-L)+abs(M-m)<=tm)) possible=true;
    ll lmM=abs(l)+abs(m-l)+abs(M-m);
    if(lmM<=tm&&(lmM+abs(m-M)+abs(L-m)<=tl)) possible=true;
    ll mlL=abs(m)+abs(l-m)+abs(L-l);
    if(mlL<=tl&&(mlL+abs(l-L)+abs(M-l)<=tm)) possible=true;
    cout<<(possible?"possible":"impossible")<<endl;
}