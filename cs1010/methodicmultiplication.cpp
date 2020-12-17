#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string x,y;
    getline(cin, x);
    getline(cin, y);
    int totx=0,toty=0;
    for (int i=0;i<x.size();i++){
        if (x[i]=='S') totx++;
    }
    for (int i=0;i<y.size();i++){
        if (y[i]=='S') toty++;
    }
    int prod=totx*toty;
    for (int i=0;i<prod;i++){
        cout<<"S(";
    }
    cout<<"0";
    for (int i=0;i<prod;i++){
        cout<<")";
    }
    cout<<endl;
}