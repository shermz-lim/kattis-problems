#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

int main() {    
    char r,s;
    unordered_map<char, int> count;
    for (char r:"A23456789TJQK"){
        count[r] = 0;
    }
    for (int i=0;i<5;i++){        
        cin>>r>>s;
        count[r] += 1;
    }
    int m=0;
    for (auto i=count.begin();i!=count.end();i++){
        m = max(m, i->second);
    }
    cout<<m<<endl;
}