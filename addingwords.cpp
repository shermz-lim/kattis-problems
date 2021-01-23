#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    string line;
    unordered_map<string,int> table;
    while(getline(cin,line)){
        if(line=="") return;
        istringstream sin(line);
        string command;
        sin>>command;
        if(command=="clear"){
            table.clear();
        }else if(command=="def"){
            string var; int value;
            sin>>var>>value;
            table[var]=value;
        }else{
            queue<string> q;
            string var,op;
            while(sin>>var>>op){
                q.push(var);
                if(op!="=") q.push(op);                
            }
            int val=0;
            op="+";
            bool unknown=false;
            while(!q.empty()){
                string nextVar=q.front();
                q.pop();                
                if(table.find(nextVar)==table.end()){
                    unknown=true; break;
                }
                int varValue=table.at(nextVar);
                val=op=="+"?val+varValue:val-varValue;
                if(!q.empty()) {
                    op=q.front(); q.pop();
                }
            }
            string res;
            if(!unknown){
                int found=false;
                for(auto i:table){
                    if(i.second==val){
                        res=i.first; found=true;
                    }
                }
                if(!found) unknown=true;
            }
            cout<<line.substr(5,line.size())<<" ";
            cout<<(unknown?"unknown":res)<<endl;
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