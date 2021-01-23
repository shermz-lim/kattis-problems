#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,r,k;
    cin>>n>>r>>k;
    int curr=k+abs(k-r);
    curr=max(curr,abs(n-curr)%2==0?n:(n+1));
    curr+=r;
    cout<<curr<<endl;
}
