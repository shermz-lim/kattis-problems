#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

struct Shield{
    ll l;
    ll u;
    double f;
};

double hor_dist(double spd, ll y, vector<Shield> &shields){
    ll curr_time=0;
    double tot_dist=0;
    for(Shield s:shields){
        tot_dist+=((s.l - curr_time)*spd);
        tot_dist+=((s.u-s.l)*spd*s.f);
        curr_time=s.u;
    }
    tot_dist+=((y-curr_time)*spd);
    return tot_dist;
}

bool cmp(Shield s1, Shield s2){
    return s1.l<s2.l;
}

void solve() {
    ll x,y;
    cin>>x>>y;
    int n;
    cin>>n;
    vector<Shield> shields;
    while(n--){
        ll l,u;
        double f;
        cin>>l>>u>>f;
        shields.push_back({l,u,f});
    }
    sort(shields.begin(),shields.end(),cmp);
    ll ax = abs(x);
    double low=0, high=ax;
    while(abs(high-low)>(10e-8)){
        double guess=(high-low)/2+low;
        if(hor_dist(guess,y,shields)>ax){
            high=guess;
        }else{
            low=guess;
        }
    }
    cout<<fixed;
    cout.precision(8);
    cout<<(x<0?-low:low)<<endl;
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