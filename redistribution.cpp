#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

bool cmp(pair<int,int> &a, pair<int,int> &b){
    return a.first>b.first;
}

void solve() {
    int n;
    cin>>n;
    vector<pair<int, int> > rooms;
    for(int i=0;i<n;i++){
        int si;
        cin>>si;
        rooms.push_back(make_pair(si,i+1));
    }
    sort(rooms.begin(),rooms.end(),cmp);
    int t=0;
    for(int i=1;i<n;i++){
        t+=rooms[i].first;
    }
    if(rooms[0].first>t){
        cout<<"impossible";
    }else{
        for(int i=0;i<n;i++){
            if(i>0)cout<<" ";
            cout<<rooms[i].second;
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