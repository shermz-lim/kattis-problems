#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve(int n){
    int arr[n];
    char c;cin>>c;
    int lookup[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        lookup[arr[i]]=i;
    }
    bool non=true;
    for(int i=0;i<n;i++){
        for(int diff=-n;diff<=n;diff++){
            if(i+diff+diff>=0&&i+diff+diff<n){
                if(lookup[i]<lookup[i+diff]&&lookup[i+diff]<lookup[i+diff+diff]){
                    cout<<"no"<<endl;
                    return;                        
                }
            }
        }
    }
    cout<<"yes"<<endl;
}

int main() {
    while(1){
        int n;
        cin>>n;
        if(n==0) break;
        solve(n);
    }
}