#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string event;
    int shares=0;
    double avgCost=0;
    while(1){
        cin>>event;
        if(event=="die"){
            int y;
            cin>>y;
            double profit=max(y-avgCost,0.0);
            double amt=shares*(y-profit*0.3);
            cout<<fixed;
            cout.precision(2);
            cout<<amt<<endl;
            break;
        }else{
            int x,y;            
            if(event=="buy"){
                cin>>x>>y;
                avgCost=(avgCost*shares+x*y)/(shares+x);
                shares+=x;
            }else if(event=="sell"){
                cin>>x>>y;
                shares-=x;
                if(shares==0) avgCost=0;
            }else if(event=="split"){
                cin>>x;
                shares*=x;
                avgCost/=x;
            }else if(event=="merge"){
                cin>>x;
                shares/=x;
                avgCost*=x;
            }
        }
    }
}