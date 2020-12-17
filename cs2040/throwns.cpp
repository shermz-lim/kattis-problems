#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> commands;
    for(int i=0;i<k;i++){
        string com;
        cin>>com;
        if(com=="undo"){
            int num;
            cin>>num;
            for(int j=0;j<num;j++){
                commands.pop_back();
            }
        }else{
            int num=stoi(com);
            commands.push_back(num);
        }
    }
    int idx=0;
    for(int i=0;i<commands.size();i++){
        int num=commands[i];
        idx=(idx+num)%n;
        while(idx<0){idx+=n;}
    }
    cout<<idx<<endl;
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