#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n,m;
    cin>>n>>m;
    vector<int> tasks(n);
    vector<int> inters(m);
    for(int i=0;i<n;i++) cin>>tasks[i];
    for(int i=0;i<m;i++) cin>>inters[i];
    sort(tasks.begin(),tasks.end());
    reverse(tasks.begin(),tasks.end());
    sort(inters.begin(),inters.end());
    reverse(inters.begin(),inters.end());
    int j=0;
    int tot=0;
    for(int i=0;i<m;i++){
        while(j<n&&inters[i]<tasks[j]){
            j++;
        }
        if(j<n){
            tot++;
            j++;
        }
    }
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