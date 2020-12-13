#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n,p,q;
    cin>>n>>p>>q;
    int r=(p+q)/n;
    cout<<((r%2==0)?"paul":"opponent")<<endl;
}