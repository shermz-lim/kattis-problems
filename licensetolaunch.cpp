#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n,s,d,m;
    cin>>n;
    m=INFINITY;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s<m){
            m=s;
            d=i;
        }
    }
    cout<<d<<endl;
}