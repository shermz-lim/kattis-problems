#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int a,b,h;
    cin>>a>>b>>h;
    int now=0;
    int tot=0;
    while(now<h){
        now+=a;
        tot++;
        if(now>=h) break;
        now-=b;
    }
    cout<<tot<<endl;
}