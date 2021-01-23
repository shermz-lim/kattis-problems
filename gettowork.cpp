#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n,t;
    cin>>n>>t;
    t--;
    vector<int> ppl(n, 0);
    vector<vector<int> > cars(n, vector<int>());
    int e;
    cin>>e;
    while(e--){
        int h,p;
        cin>>h>>p;
        h--;
        cars[h].push_back(p);
        ppl[h]++;
    }
    vector<int> out;
    for(int i=0;i<n;i++){
        if(t==i){
            out.push_back(0);
            continue;
        }
        if(accumulate(cars[i].begin(),cars[i].end(),0)<ppl[i]){
            cout<<"IMPOSSIBLE"<<endl;
            return;
        }
        sort(cars[i].begin(),cars[i].end(),greater<int>());
        int t=0;
        if(ppl[i]>0){
            for(int car:cars[i]){
                ppl[i]-=car;
                t++;
                if(ppl[i]<=0) break;
            }
        }
        out.push_back(t);
    }
    for(int i=0;i<out.size();i++){
        if(i>0) cout<<" ";
        cout<<out[i];
    }
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        cout << "Case #" << t  << ": ";
        solve();
    }
}