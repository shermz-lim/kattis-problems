#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int p;
    cin>>p;
    for (int i=0;i<p;i++){
        int k,n;
        cin>>k>>n;
        cout<<k<<" ";
        cout<<(n*(n+1)/2)<<" ";
        cout<<(n*(2+(n-1)*2)/2)<<" ";
        cout<<(n*(2+2+(n-1)*2)/2)<<endl;
    }
}