#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

vector<bool> recurse(int n){
    if(n==1){
        return vector<bool>();
    }else if(n%2!=0){
        vector<bool> res=recurse(n/2);
        res.push_back(1);
        return res;
    }else{
        vector<bool> res=recurse(n/2);
        res.push_back(0);
        return res;
    }
}

void solve() {
    int t,n;
    cin>>t>>n;
    vector<bool> rights=recurse(n);
    unsigned int p=1,q=1;
    for(bool right:rights){
        if(right){
            p=p+q;
        }else{
            q=p+q;
        }
    }
    cout<<t<<" "<<p<<"/"<<q<<endl;
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