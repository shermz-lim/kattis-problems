#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int p,k,l;
    cin>>p>>k>>l;
    multimap<int,int> freq_let;
    for(int i=0;i<l;i++){
        int freq;
        cin>>freq;
        freq_let.insert(make_pair(freq,i));
    }
    int i=0;
    ll t=0;
    for(auto it=freq_let.rbegin();it!=freq_let.rend();it++){
        t+=((i/k+1)*it->first);
        i++;
    }
    cout<<t<<endl;
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