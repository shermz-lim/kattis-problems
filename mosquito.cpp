#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int m,p,l,e,r,s,n;
    string line;
    while(getline(cin, line)){
        if(line=="") break;
        istringstream sin(line);
        sin>>m>>p>>l>>e>>r>>s>>n;
        for(int i=0;i<n;i++){
            int newL=m*e;
            int newP=l/r;
            int newM=p/s;
            l=newL;p=newP;m=newM;
        }
        cout<<m<<endl;
    }
}