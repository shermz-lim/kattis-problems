#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int k, n;
    cin>>k>>n;
    k-=1;
    int currentT=0;
    int tLimit=3*60+30;
    int ans=-1;
    for (int i=0;i<n;i++){
        int t; char a;
        cin>>t>>a;
        currentT += t;
        if (currentT >= tLimit && ans<0){
            ans=k+1;
        }
        if (a=='T'){
            k=(k+1)%8;
        }
    }
    cout<<ans<<endl;    
}