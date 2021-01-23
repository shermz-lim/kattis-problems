#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    double x,y;
    cin>>x>>y;
    cout<<fixed;
    cout.precision(10);
    if(y==1&&x!=0){
        cout<<"IMPOSSIBLE";
    }else if(y==1&&x==0){
        cout<<"ALL GOOD";
    }else{
        cout<<(x/(1-y));
    }
    cout<<endl;
}