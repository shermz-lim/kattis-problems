#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        unsigned ll p,r,f;
        cin>>p>>r>>f;
        int j=0;
        while(1){
            if(p>f) break;
            p*=r;
            j++;
        }
        cout<<j<<endl;
    }
}