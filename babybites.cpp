#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    cin>>n;
    bool ms=true;
    for (int i=1;i<=n;i++){
        string in;
        cin>>in;
        if (in=="mumble"){
            continue;
        } else {
            ms=ms&&(stoi(in)==i);
        }
    }
    cout<<(ms?"makes sense":"something is fishy")<<endl;
}