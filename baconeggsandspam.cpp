#include <bits/stdc++.h>
#include <map>

using namespace std;

#define ar array
#define ll long long

void solve(int n) {
    map<string, vector<string> > orders;
    for(int i=0;i<n;i++){
        string line;
        getline(cin,line);
        istringstream sin(line);
        string name,food;
        sin>>name;
        while(sin>>food){
            orders[food].push_back(name);
        }
    }
    for(auto i:orders){
        cout<<i.first<<" ";
        vector<string> names=i.second;
        sort(names.begin(),names.end());
        for(int i=0;i<names.size();i++){
            cout<<names[i];
            if(i!=names.size()-1)cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    while(1){
        string line;
        cin>>n;
        getline(cin,line);
        if(n==0) break;
        solve(n);
    }
}