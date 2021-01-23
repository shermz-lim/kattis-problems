#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

#define ar array
#define ll long long

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        unordered_set<string> s;
        for(int j=0;j<n;j++){
            string c;
            cin>>c;
            s.insert(c);
        }
        cout<<s.size()<<endl;
    }
}