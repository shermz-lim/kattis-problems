#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int w,n;
    cin>>w>>n;
    int tot=0;
    for (int i=0;i<n;i++){
        int wi,li;
        cin>>wi>>li;
        tot+=(wi*li);
    }
    cout<<(tot/w)<<endl;
}