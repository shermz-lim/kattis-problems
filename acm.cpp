#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int t; char c; string status;
    int numP=26;
    int solved[numP];
    int numTries[numP];
    for (int i=0;i<numP;i++){
        solved[i]=-1;
        numTries[i]=0;
    }
    while(1){
        cin>>t;
        if (t==-1) break;
        cin>>c>>status;
        int idx=c-'A';
        numTries[idx]++;
        if(status=="right"){
            solved[idx]=t;
        }
    }
    int totS=0, p=0;
    for(int i=0;i<numP;i++){
        if (solved[i]!=-1){
            p+=solved[i];
            p+=(20*(numTries[i]-1));
            totS++;
        }
    }
    cout<<totS<<" "<<p<<endl;
}