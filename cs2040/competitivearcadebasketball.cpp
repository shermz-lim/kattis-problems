#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n,p,m;
    cin>>n>>p>>m;
    unordered_map<string,int> s;
    while(n--){
        string nam;
        cin>>nam;
        s[nam]=0;
    }
    unordered_set<string> winners;
    vector<string> out;
    for(int i=0;i<m;i++){
        string nam;
        int sc;
        cin>>nam>>sc;
        s[nam]+=sc;
        if(s[nam]>=p){
            if(winners.count(nam)==0){
                out.push_back(nam);
                winners.insert(nam);
            }
        }
    }
    if(out.size()==0){
        cout<<"No winner!"<<endl;
    }else{
        for(string nam:out){
            cout<<nam<<" wins!"<<endl;
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