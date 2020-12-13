#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    cin>>n;
    int prevX=0;
    int total=0;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>prevX){
            total++;
        }
        prevX=x;
    }
    cout<<total<<endl;
}