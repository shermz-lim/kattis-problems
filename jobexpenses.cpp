#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n,c,t;
    cin>>n;
    t=0;
    for(int i=0;i<n;i++){
        cin>>c;
        if(c<0){
            t+=(-c);
        }
    }
    cout<<t<<endl;
}