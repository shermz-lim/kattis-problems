#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n,dm;
    cin>>n>>dm;
    int ans=n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x<=dm&&ans>=n){
            ans=i;
        }
    }
    if(ans==n){
        cout<<"It had never snowed this early!"<<endl;
    }else{
        cout<<"It hadn't snowed this early in "<<ans<<" years!"<<endl;
    }
}