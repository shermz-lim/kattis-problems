#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int s,v1,v2;
    cin>>s>>v1>>v2;
    int maxv1=s/v1;
    int minBottles=INT_MAX;
    int minBi=-1;
    int can=false;
    for(int i=0;i<=maxv1;i++){
        int v1used=i*v1;
        if((s-v1used)%v2==0){
            int used=(s-v1used)/v2+i;            
            if(used<minBottles){
                minBottles=used;
                minBi=i;
                can=true;
            }
        }
    }
    if(!can){
        cout<<"Impossible"<<endl;
    }else{
        cout<<minBi<<" "<<(minBottles-minBi)<<endl;
    }
}