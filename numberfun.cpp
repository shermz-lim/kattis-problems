#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n,a,b,c;
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>a>>b>>c;
        bool y = (
            (a + b == c) || (a - b == c) || (a * b == c) || ((double) a / b == c)
            || (b - a == c) || ((double) b / a == c)
        );
        cout<<(y?"Possible":"Impossible")<<endl;
    }
}