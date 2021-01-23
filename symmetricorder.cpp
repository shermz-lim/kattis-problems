#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve(int n) {
    string names[n];
    for(int i=0;i<n;i++){
        cin>>names[i];
    }
    string result[n];
    int i=0,j=n-1,k=0;
    while(i<j){
        result[i]=names[k];
        result[j]=names[k+1];
        i++;j--;
        k+=2;
    }
    if(n%2!=0) result[n/2]=names[n-1];
    for(int i=0;i<n;i++) cout<<result[i]<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc=1;
    while(1){
        int n; cin>>n;
        if(n==0)break;
        cout<<"SET "<<tc<<endl;
        solve(n);
        tc++;
    }
}