#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string line;
    getline(cin, line);
    int sz=line.size()/3;
    string a="",b="",c="";
    for(int i=0;i<sz;i++){
        a.push_back(line[i]);
        b.push_back(line[sz+i]);
        c.push_back(line[2*sz+i]);
    }
    if(a==b){
        cout<<a;
    }else if(b==c){
        cout<<b;
    }else{
        cout<<c;
    }
    cout<<endl;
}