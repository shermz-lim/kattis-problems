#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    string line;
    unordered_map<string,int> table;
    while(getline(cin,line)){
        if(line=="")break;
        istringstream sin(line);
        string com; sin>>com;
        if(com=="define"){
            int i; string x;
            sin>>i>>x;
            table[x]=i;
        }else{
            string x,y,z;
            sin>>x>>y>>z;
            if(table.find(x)==table.end()||table.find(z)==table.end()){
                cout<<"undefined"<<endl;
            }else{
                if(y==">"){
                    cout<<(table.at(x)>table.at(z)?"true":"false")<<endl;
                }else if(y=="<"){
                    cout<<(table.at(x)<table.at(z)?"true":"false")<<endl;
                }else{
                    cout<<(table.at(x)==table.at(z)?"true":"false")<<endl;
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}