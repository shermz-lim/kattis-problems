#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    cin>>n;
    string x,y;
    getline(cin, x);
    getline(cin, x);
    getline(cin, y);
    bool s=1;
    for (int i=0;i<x.size();i++){
        if (n%2==0){
            s = s&&(x[i]==y[i]);
        }else{
            s = s&&(x[i]!=y[i]);
        }        
    }
    cout<<"Deletion "<<(s?"succeeded":"failed")<<endl;
}