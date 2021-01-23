#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int g;
    cin>>g;
    unordered_set<int> s;
    int arr[g];
    for(int i=0;i<g;i++){
        cin>>arr[i];
        if(s.find(arr[i])!=s.end()){
            s.erase(arr[i]);
        }else{
            s.insert(arr[i]);
        }
    }
    int c=*s.begin();
    for(int i=0;i<g;i++){
        if(arr[i]==c){
            cout<<c<<endl; return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        cout << "Case #" << t  << ": ";
        solve();
    }
}