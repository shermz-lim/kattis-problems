#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n;
    cin>>n;
    bool food[366]={false};
    for(int i=0;i<n;i++){
        int si,ti;
        cin>>si>>ti;
        for(int j=si;j<=ti;j++){
            food[j]=true;
        }
    }
    int t=0;
    for(int i=1;i<=365;i++){
        if(food[i]) t++;
    }
    cout<<t<<endl;
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