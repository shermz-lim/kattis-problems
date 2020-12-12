#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n, g;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>g;
        int prev, x;
        cin>>prev>>x;
        for (int j=2;j<=g-1;j++){
            if(!((x-prev)==1)){
                cout<<j<<endl;
                break;
            }
            prev=x;
            cin>>x;
        }
        string line;
        getline(cin, line);
    }
}