#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string cipher, key;
    getline(cin, cipher);
    getline(cin, key);
    string res="";
    for (int i=0;i<cipher.size();i++){
        char r=cipher[i]-(key[i]-'A');
        r=r<'A'?('Z'+1-('A'-r)):r;
        key.push_back(r);
        res.push_back(r);
    }
    cout<<res<<endl;
}