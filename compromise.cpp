#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m;
        cin>>n>>m;
        int ones[m];
        for(int j=0;j<m;j++) ones[j]=0;
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                char x;
                cin>>x;
                ones[k]+=(x-'0');
            }
        }
        for(int j=0;j<m;j++){
            cout<<(ones[j]>(n/2)?1:0);
        }
        cout<<endl;
    }
}