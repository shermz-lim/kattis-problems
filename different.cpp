#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string line;
    while(getline(cin, line)){
        istringstream sin(line);
        unsigned long long x, y;
        sin>>x>>y;
        cout<<(max(x,y)-min(x,y))<<endl;
    }
}