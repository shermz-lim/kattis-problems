#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string c, k;
    cin>>c>>k;
    string res="";
    for (int i=0;i<c.size();i++){
        int shift=k[i]-'A';
        char r= i%2==0 ? c[i] - shift : c[i] + shift;
        if (r<'A') r+=26;
        if (r>'Z') r-=26;
        res += r;
    }
    cout<<res<<endl;
}