#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int ncs,ne;
        cin>>ncs>>ne;
        int cs[ncs], e[ne];
        double avgcs=0;
        for(int j=0;j<ncs;j++) {
            cin>>cs[j];
            avgcs+=cs[j];
        }
        avgcs/=ncs;
        double avge=0;
        for(int j=0;j<ne;j++) {
            cin>>e[j];
            avge+=e[j];
        }
        avge/=ne;
        int tot=0;
        for(int j=0;j<ncs;j++){
            if(cs[j]<avgcs&&cs[j]>avge) tot++;
        }
        cout<<tot<<endl;
    }
}