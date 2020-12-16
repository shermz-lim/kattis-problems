#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int p,a,b,c,d,n;
    cin>>p>>a>>b>>c>>d>>n;
    double maxD=0;
    double prices[n];
    for(int i=1;i<=n;i++){
        double curr=p*(sin(a*i+b)+cos(c*i+d)+2);
        prices[i-1]=curr;
    }
    double maxDec=0;
    int i=0,j=1;
    while(j<n){
        if(prices[j]>prices[i]){
            i=j;j=i+1;
        }else{
            maxDec=max(maxDec,prices[i]-prices[j]);
            j++;
        }
    }
    cout<<fixed;
    cout.precision(10);
    cout<<maxDec<<endl;
}