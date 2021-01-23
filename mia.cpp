#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    while(1){
        int s0,s1,r0,r1;
        cin>>s0>>s1>>r0>>r1;
        if(s0+s1+r0+r1==0) break;
        int p1=0, p2=0;
        int smax=max(s0, s1), smin=min(s0, s1);
        int rmax=max(r0, r1), rmin=min(r0, r1);
        if(smax==2&&smin==1){
            p1=7;
        }else if(s0==s1){
            p1=s0;
        }
        if(rmax==2&&rmin==1){
            p2=7;
        }else if(r0==r1){
            p2=r0;
        }
        int winner=0;
        if(p1>p2){
            winner=1;
        }else if(p2>p1){
            winner=2;
        }else{
            int p1Score=smax*10+smin;
            int p2Score=rmax*10+rmin;
            if(p1Score>p2Score){
                winner=1;
            }else if(p2Score>p1Score){
                winner=2;
            }
        }
        if(winner==0){
            cout<<"Tie."<<endl;
        }else{
            cout<<"Player "<<winner<<" wins."<<endl;
        }
    }
}