#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int registers[8]={2,3,5,7,11,13,17,19};
    int values[8];
    for(int i=0;i<8;i++) cin>>values[i];
    int t=0;
    while(1){
        int idx=0;
        while(idx<8){
            if(values[idx]+1==registers[idx]){
                values[idx]=0;
                idx++;
            }else{
                values[idx]++;
                break;
            }
        }
        if(idx==8) break;        
        t++;        
    }
    cout<<t<<endl;
}