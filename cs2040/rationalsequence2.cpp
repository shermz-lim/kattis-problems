#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

vector<bool> recurse(int p, int q){
    if(p==q){
        return vector<bool>();
    }else if(p>q){
        vector<bool> res=recurse(p-q,q);
        res.push_back(1);
        return res;
    }else{
        vector<bool> res=recurse(p,q-p);
        res.push_back(0);
        return res;
    }
}

void solve() {
    int t; string pq;
    cin>>t>>pq;
    int p=stoi(pq.substr(0,pq.find('/')));
    int q=stoi(pq.substr(pq.find('/')+1));
    vector<bool> rights=recurse(p,q);
    ll n=1;
    for(bool right:rights){
        n=right?(n*2+1):(n*2);
    }
    cout<<t<<" "<<n<<endl;
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