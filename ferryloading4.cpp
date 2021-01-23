#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int l,m;
    cin>>l>>m;
    l*=100;
    queue<int> left,right;
    while(m--){
        int li;
        string side;
        cin>>li>>side;
        if(side=="left"){
            left.push(li);
        }else{
            right.push(li);
        }
    }
    bool left_bank=true;
    int trips=0;
    while(!left.empty()||!right.empty()){
        int currLoad=0;
        trips++;
        if(left_bank){
            while(!left.empty()&&(currLoad+left.front()<=l)){
                currLoad+=left.front();
                left.pop();
            }
        }else{
            while(!right.empty()&&(currLoad+right.front()<=l)){
                currLoad+=right.front();
                right.pop();
            }
        }
        left_bank=!left_bank;
    }
    cout<<trips<<endl;
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