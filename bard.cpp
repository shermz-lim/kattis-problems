#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n,e;
    cin>>n>>e;
    int songs=0;
    unordered_set<int> arr[n+1];
    while(e--){
        int k;
        cin>>k;
        unordered_set<int> new_s;
        vector<int> villagers;
        bool has_bard=false;
        while(k--){
            int x;
            cin>>x;
            villagers.push_back(x);
            if(x==1){                
                has_bard=true;
                songs++;
            }else{
                new_s.insert(arr[x].begin(),arr[x].end());
            }
        }
        for(int x:villagers){
            if(has_bard){
                arr[x].insert(songs);                
            }else{
                arr[x]=new_s;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(arr[i].size()==songs){
            cout<<i<<endl;
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