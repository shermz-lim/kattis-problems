#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

bool is_palin(int i){
    string s=to_string(i);
    return (
        (s[0]==s[5])
        &&(s[1]==s[4])
        &&(s[2]==s[3])
    );
}

void solve() {
    int n;
    cin>>n;
    set<int> s;
    for(int i=100000;i<=999999;i++){
        if(is_palin(i)){
            s.insert(i);
        }
    }
    while(n--){
        int x;
        cin>>x;
        auto it=s.lower_bound(x);
        if(it==s.end()){
            it--;
            cout<<*it<<endl;
        }else if(it==s.begin()){
            cout<<*it<<endl;
        }else{
            int up=*it;
            it--;
            int down=*it;
            if(abs(up-x)<abs(down-x)){
                cout<<up<<endl;
            }else{
                cout<<down<<endl;
            }
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