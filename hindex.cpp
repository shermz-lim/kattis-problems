#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll high=*max_element(arr,arr+n);
    ll low=0;
    while(high!=low){
        ll guess=ceil((double)(high-low)/2)+low;
        int count=0;
        for(ll c:arr){
            if(c>=guess){
                count++;
            }
        }
        if(count>=guess){
            low=guess;
        }else{
            high=guess-1;
        }
    }
    cout<<low<<endl;
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