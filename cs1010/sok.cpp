#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    double a,b,c,i,j,k;
    cin>>a>>b>>c>>i>>j>>k;
    double x=min(a/i, min(b/j, c/k));
    cout<<(a-x*i)<<" "<<(b-x*j)<<" "<<(c-x*k)<<endl;
}