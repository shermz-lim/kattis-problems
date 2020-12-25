#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n,m;
    cin>>n;
    unordered_map<string,vector<string> > adj_list;
    unordered_map<string,char> color;
    for(int i=0;i<n;i++){
        string w;
        cin>>w;
        adj_list[w]=vector<string>();
        color[w]='W';
    }
    cin>>m;
    while(m--){
        string u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    for(auto it=color.begin();it!=color.end();it++){
        if(it->second=='W'){
            // run bfs
            queue<string> q;
            q.push(it->first);
            it->second='R';
            while(!q.empty()){
                string u=q.front();
                q.pop();                
                char uc=color.find(u)->second;
                for(string v:adj_list.find(u)->second){
                    char &vc=color.find(v)->second;
                    if(vc==uc){
                        cout<<"impossible"<<endl;
                        return;
                    }
                    if(vc=='W'){
                        vc=uc=='R'?'B':'R';
                        q.push(v);
                    }
                }
            }
        }
    }
    int idx=0;
    for(auto it=color.begin();it!=color.end();it++){
        if(it->second=='R'){
            if(idx>0)cout<<" ";
            cout<<it->first;
            idx++;
        }
    }    
    cout<<endl;
    idx=0;
    for(auto it=color.begin();it!=color.end();it++){
        if(it->second=='B'){
            if(idx>0)cout<<" ";
            cout<<it->first;
            idx++;
        }
    }    
    cout<<endl;    
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