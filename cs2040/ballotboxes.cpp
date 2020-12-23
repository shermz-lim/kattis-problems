#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

struct CustomCompare{
    bool operator()(const pair<int,int> lhs, const pair<int, int> rhs){
        return lhs.first*rhs.second < rhs.first*lhs.second;
    }
};

void solve() {
    int n,b;
    while(cin>>n>>b, !(n==-1&&b==-1)){
        priority_queue<pair<int, int>, vector<pair<int,int> >, CustomCompare> pq;
        while(n--){
            int a; cin>>a;
            pq.push(make_pair(a, 1));
            b--;
        }
        while(b--){
            auto top=pq.top(); pq.pop();
            top.second++;
            pq.push(top);
        }
        auto top=pq.top();
        cout<<ceil(((double)top.first/top.second))<<endl;
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