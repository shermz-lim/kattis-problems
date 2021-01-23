#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n,p;
    cin>>n>>p;
    vector<int> arr;
    int first;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(i!=p){
            arr.push_back(x);
        }else{
            first=x;
        }
    }
    sort(arr.begin(),arr.end());
    arr.insert(arr.begin(), first);
    int total=0, totalTime=0, totalPenalty=0;
    for(int i=0;totalTime+arr[i]<=300&&i<n;i++){
        total++;
        totalTime+=arr[i];
        totalPenalty+=totalTime;
    }
    cout<<total<<" "<<totalPenalty<<endl;
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