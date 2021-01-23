#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    vector<vector<int> > arr(3, vector<int>(3));
    vector<pair<int,int> > lookup(10);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
            lookup[arr[i][j]]=make_pair(i,j);
        }
    }
    double tot=0;
    for(int i=1;i<=8;i++){
        auto curr=lookup[i];
        auto nex=lookup[i+1];
        double x=pow(curr.first-nex.first,2);
        double y=pow(curr.second-nex.second,2);
        tot+=sqrt(x+y);
    }
    cout<<fixed; cout.precision(10);
    cout<<tot<<endl;
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