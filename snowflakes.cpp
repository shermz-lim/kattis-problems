#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int s=0;
    int e=0;
    int m=0;
    unordered_set<int> curr;
    while(e<n){
        if(curr.find(arr[e])!=curr.end()){
            while(arr[s]!=arr[e]){
                curr.erase(arr[s]);
                s++;
            }
            curr.erase(arr[s]);
            s++;
        }
        curr.insert(arr[e]);
        m=max(m,(int)curr.size());
        e++;
    }
    cout<<m<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}