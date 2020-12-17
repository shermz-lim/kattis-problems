#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    cin>>n;
    stack<bool> s;
    while(n>0){
        s.push(n%2==1);
        n/=2;
    }
    int ans=0;
    int p=0;
    while(!s.empty()){
        if(s.top()){
            ans+=pow(2,p);
        }
        s.pop();
        p++;
    }
    cout<<ans<<endl;
}