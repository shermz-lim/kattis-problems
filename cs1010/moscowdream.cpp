#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    if (a<=0 || b<=0 || c<=0) {
        cout<<"NO";
    } else if (a + b + c < n) {
        cout<<"NO";        
    } else if (n<3) {
        cout<<"NO";        
    } else {
        cout<<"YES";
    }
    cout<<endl;
}