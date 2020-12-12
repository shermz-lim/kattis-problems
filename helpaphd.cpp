#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    string line;
    cin>>n;
    getline(cin, line);
    for (int i=0;i<n;i++){

        getline(cin, line);
        if (line=="P=NP"){
            cout<<"skipped"<<endl;
        } else{
            istringstream sin(line);
            int a,b;
            sin>>a>>b;
            cout<<(a + b)<<endl;
        }
    }
}