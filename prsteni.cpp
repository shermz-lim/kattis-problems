#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

int gcd(int x, int y){
    if (x==y||y==0) return x;
    if(x<y){
        return gcd(y,x);
    }else{
        return gcd(y,x%y);
    }
}

void solve() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int x=arr[0];
    for(int i=1;i<n;i++){
        int y=arr[i];
        int gd=gcd(x,y);
        cout<<(x/gd)<<"/"<<(y/gd)<<endl;
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