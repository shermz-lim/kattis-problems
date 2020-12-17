#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n;
    cin>>n;
    int awarded=0;
    unordered_set<string> unis;
    for(int i=0;i<n;i++){
        string uni,team;
        cin>>uni>>team;
        if(awarded<12&&unis.find(uni)==unis.end()){
            cout<<uni<<" "<<team<<endl;
            awarded++;
            unis.insert(uni);
        }
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