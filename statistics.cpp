#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string line;
    int idx=1;
    while (getline(cin, line)){
        if (line=="") break;
        istringstream sin(line);
        int n;
        sin>>n;
        int mini=1000000,maxi=-1000000;
        for (int i=0;i<n;i++){
            int x;
            sin>>x;
            mini=min(mini,x);
            maxi=max(maxi,x);
        }
        cout<<"Case "<<idx<<": "<<mini<<" "<<maxi<<" "<<(maxi - mini)<<endl;
        idx++;
    }
}