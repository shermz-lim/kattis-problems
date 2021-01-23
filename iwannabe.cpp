#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

#define ar array
#define ll long long

bool comp(pair<ll,ll> a, pair<ll, ll> b){
    return a.first>b.first;
}

void solve() {
    int n,k;
    cin>>n>>k;
    vector<pair<ll, ll> > atks;
    vector<pair<ll, ll> > defs;
    vector<pair<ll, ll> > heals;
    for(int i=0;i<n;i++){
        ll a,d,h;
        cin>>a>>d>>h;
        atks.push_back(make_pair(a,i));
        defs.push_back(make_pair(d,i));
        heals.push_back(make_pair(h,i));
    }
    sort(atks.begin(),atks.end(),comp);
    sort(defs.begin(),defs.end(),comp);
    sort(heals.begin(),heals.end(),comp);    
    unordered_set<ll> s;
    for(int i=0;i<k;i++){
        ll idx=atks[i].second;
        s.insert(idx);
        idx=defs[i].second;
        s.insert(idx);
        idx=heals[i].second;
        s.insert(idx);
    }
    cout<<s.size()<<endl;
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