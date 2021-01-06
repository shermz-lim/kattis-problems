#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);    
    for(int i=0;i<n;i++) cin>>arr[i];
    double avg=0;
    for(int e:arr) avg+=e;
    avg/=arr.size();
    int tot=0;
    for(int e:arr){
        if(e>avg) tot++;
    }
    cout<<fixed;
    cout.precision(3);
    cout<<((double)tot/arr.size()*100)<<"%"<<endl;
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