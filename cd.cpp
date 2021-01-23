#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve(int n,int m) {
    int jack[n],jill[m];
    for(int i=0;i<n;i++) cin>>jack[i];
    for(int i=0;i<m;i++) cin>>jill[i];
    int i=0,j=0,t=0;
    while(i<n&&j<m){
        if(jack[i]==jill[j]){
            t++; i++; j++;
        }else if(jack[i]>jill[j]){
            j++;
        }else{
            i++;
        }
    }
    cout<<t<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,m;
    while(1){
        cin>>n>>m;
        if(n==0&&m==0)break;
        solve(n,m);
    }
}