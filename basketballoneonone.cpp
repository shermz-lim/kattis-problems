#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string line;
    getline(cin, line);
    istringstream sin(line);
    char p;
    int s;
    int a=0,b=0;
    while (sin >> p && sin >> s){
        if (p=='A'){
            a+=s;
        } else {
            b+=s;
        }
    }
    cout<<(a>b?'A':'B')<<endl;
}