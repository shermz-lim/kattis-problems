#include <bits/stdc++.h>
#include <unordered_map>
#include <map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n;
    cin>>n;
    unordered_map<string,int> freq;
    for(int i=0;i<n;i++){
        string name; int count;
        cin>>name>>count;
        freq[name]+=count;
    }
    cout<<freq.size()<<endl;
    map<int,vector<string>, greater<int> > names;
    for(auto i:freq){
        names[i.second].push_back(i.first);
    }
    for(auto i:names){
        vector<string> all=i.second;
        sort(all.begin(),all.end());
        for(string n:all){
            cout<<n<<" "<<i.first<<endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}