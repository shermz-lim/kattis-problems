#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    cin>>n;
    while(n!=-1){
        int s,t,toth,totd;
        toth=0;totd=0;
        for (int i=0;i<n;i++){
            cin>>s>>t;
            totd+=((t-toth)*s);
            toth=t;
        }
        cout<<totd<<" miles"<<endl;
        cin>>n;
    }
}