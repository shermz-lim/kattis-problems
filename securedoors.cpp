#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n;
    cin>>n;
    unordered_set<string> inBuilding;
    for(int i=0;i<n;i++){
        string c,name;
        cin>>c>>name;
        bool anomaly=false;
        if(c=="entry"){
            if(inBuilding.find(name)!=inBuilding.end()){
                anomaly=true;
            }else{
                inBuilding.insert(name);
            }
            cout<<name<<" entered";            
        }else{
            if(inBuilding.find(name)==inBuilding.end()){
                anomaly=true;
            }else{
                inBuilding.erase(name);
            }
            cout<<name<<" exited";
        }
        if(anomaly) cout<<" (ANOMALY)";
        cout<<endl;
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