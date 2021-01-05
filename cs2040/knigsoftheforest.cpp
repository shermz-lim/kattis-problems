#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int k,n;
    cin>>k>>n;
    priority_queue<pair<int,int> > pq;
    vector<pair<int, int> > entering(n);
    for(int i=0;i<(n+k-1);i++){
        int year, str;
        cin>>year>>str;
        year-=2011;
        if(year==0){
            pq.push(make_pair(str,i));
        }else{
            entering[year]=make_pair(str,i);
        }
    }
    for(int i=0;i<n;i++){
        if(i>0){
            pq.push(entering[i]);
        }        
        auto win=pq.top();
        pq.pop();
        if(win.second==0){
            cout<<(2011+i)<<endl;
            return;
        }
    }
    cout<<"unknown"<<endl;
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