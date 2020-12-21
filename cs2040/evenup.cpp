#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n;
    cin>>n;
    stack<int> s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(!s.empty()&&!(s.top()%2^x%2)){
            s.pop();
        }else{
            s.push(x);
        }
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