#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    string start;
    cin>>start;
    int n;
    cin>>n;
    unordered_map<char, vector<string> > m;
    while(n--){
        string w;
        cin>>w;
        m[w[0]].push_back(w);
    }
    char start_last=start.back();
    if(m[start_last].empty()){
        cout<<"?"<<endl;
        return;
    }
    for(string w:m[start_last]){
        bool elim=(
            w.back()==w.front()&&(m[w.back()].size()==1)
            ||m[w.back()].empty()
        );
        if(elim){
            cout<<w<<"!"<<endl;
            return;
        }
    }
    cout<<m[start_last][0]<<endl;
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