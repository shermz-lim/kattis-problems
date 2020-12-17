#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int s;
    cin>>s;
    cout<<s<<":"<<endl;
    for (int i=2;i<=ceil((double)s/2);i++){
        for (int j=i-1;j<=i;j++){
            int tot=i+j;
            if (s % tot == 0 || (s + j) % tot == 0){
                cout<<i<<","<<j<<endl;
            }
        }
    }
}