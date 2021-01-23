#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n,b,h,w;
    cin>>n>>b>>h>>w;
    ll minCost=LLONG_MAX;
    bool sh=true;
    for(int i=0;i<h;i++){
        int p;
        cin>>p;
        ll total=p*n;
        bool y=false;
        for(int j=0;j<w;j++){
            int num;
            cin>>num;
            if(num>n) { y=true; }
        }
        if(total<minCost&&y){
            minCost=total;
            sh=false;
        }
    }
    if(sh||minCost>b){
        cout<<"stay home"<<endl;
    }else{
        cout<<minCost<<endl;
    }
}