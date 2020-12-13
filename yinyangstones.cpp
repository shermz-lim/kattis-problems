#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string line;
    getline(cin, line);
    int totw=0,totb=0;
    for(int i=0;i<line.size();i++){
        char c=line[i];
        if(c=='W') totw++;
        if(c=='B') totb++;
    }
    cout<<(int)(totw==totb)<<endl;
}