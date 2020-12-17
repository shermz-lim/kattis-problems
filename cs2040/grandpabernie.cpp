#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n;
    cin>>n;
    unordered_map<string, vector<int> > trips;
    for(int i=0;i<n;i++){
        string coun; int year;
        cin>>coun>>year;
        trips[coun].push_back(year);
    }
    for(auto i=trips.begin();i!=trips.end();i++){
        sort(i->second.begin(),i->second.end());
    }
    int q;cin>>q;
    for(int i=0;i<q;i++){
        string s; int k;
        cin>>s>>k;
        cout<<trips[s][k-1]<<endl;
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