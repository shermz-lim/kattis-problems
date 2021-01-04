#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    string digits;
    cin>>digits;
    ll tot=0;
    for(int i=digits.size()-1;i>=0;i--){
        int idx=digits.size()-i;
        int d=digits[i]-'0';
        if(idx%2==0){
            if(2*d>=10){
                tot+=((2*d)%10);
                tot+=((2*d)/10);
            }else{
                tot+=(2*d);
            }
        }else{
            tot+=d;
        }
    }
    cout<<(tot%10==0?"PASS":"FAIL")<<endl;
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