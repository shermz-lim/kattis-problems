#include <bits/stdc++.h>
#include <deque> 


using namespace std;

#define ar array
#define ll long long

void solve() {
    string line;
    getline(cin,line);
    deque<char> q;
    for(int i=0;i<line.size();i++){
        char c=line[i];
        if(c=='<'){
            q.pop_back();
        }else{
            q.push_back(c);
        }
    }
    for(auto i:q){
        cout<<i;
    }
    cout<<endl;
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