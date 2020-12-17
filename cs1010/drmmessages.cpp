#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string in;
    getline(cin, in);
    string l=in.substr(0,in.size()/2);
    string r=in.substr(in.size()/2,in.size());
    int rotL=0,rotR=0;
    for (int i=0;i<l.size();i++){
        rotL+=(l[i]-'A');
        rotR+=(r[i]-'A');
    }
    for (int i=0;i<l.size();i++){
        l[i]= ((l[i] + rotL) - 'A')%26 + 'A';
        r[i]= ((r[i] + rotR) - 'A')%26 + 'A';
    }    
    for (int i=0;i<l.size();i++){
        l[i]= (l[i]+(r[i]-'A') - 'A')%26 + 'A';
    }
    cout<<l<<endl;
}