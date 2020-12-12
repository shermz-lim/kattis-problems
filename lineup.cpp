#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    cin>>n;
    string prev,x;
    cin>>prev;
    bool inc=false,dec=false;
    for (int i=1;i<n;i++){
        cin>>x;
        if(x>prev){
            inc=true;
        }else{
            dec=true;
        }
        prev=x;
    }
    if(inc&&dec){
        cout<<"NEITHER";
    }else if(inc){
        cout<<"INCREASING";
    }else{
        cout<<"DECREASING";
    }
    cout<<endl;
}