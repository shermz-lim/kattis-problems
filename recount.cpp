#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    string line;
    unordered_map<string,int> votes;
    while(getline(cin,line)){
        if(line=="***")break;
        votes[line]++;
    }
    int maxFreq=0;
    for(auto i:votes){
        maxFreq=max(maxFreq,i.second);
    }
    string winner="";
    for(auto i:votes){
        if(i.second==maxFreq){
            if(winner!=""){
                cout<<"Runoff!"<<endl; return;
            }else{
                winner=i.first;
            }
        }
    }    
    cout<<winner<<endl;
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