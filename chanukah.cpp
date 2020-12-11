#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int p;
    cin>>p;
    for (int i=0;i<p;i++){
        int k, n;
        cin>>k>>n;
        cout<<k<<" "<<((n * (n + 1)/2) + n)<<endl;
    }
}