#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n,m;
    cin>>n>>m;
    if (n>m){
        cout<<"Dr. Chaz needs "<<(n-m)<<" more piece"<<((n-m)<=1?"":"s")<<" of chicken!"<<endl;
    }else{
        cout<<"Dr. Chaz will have "<<(m - n)<<" piece"<<((m-n)<=1?"":"s")<<" of chicken left over!"<<endl;
    }
}