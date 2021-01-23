#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string line;
    while(cin>>line){
        istringstream sin(line);
        int n;
        sin>>n;
        cout<<(n==1?1:n+(n-2))<<endl;
    }
}