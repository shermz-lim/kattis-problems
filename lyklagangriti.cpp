#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    list<char> lst;
    list<char>::iterator cur_ptr=lst.end();
    string line;
    getline(cin,line);
    for(int i=0;i<line.size();i++){
        char c=line[i];
        if(c=='L'){
            if(cur_ptr!=lst.begin()){
                cur_ptr--;
            }
        }else if(c=='R'){
            if(cur_ptr!=lst.end()){
                cur_ptr++;
            }
        }else if(c=='B'){
            if(cur_ptr!=lst.begin()){
                cur_ptr--;
                cur_ptr=lst.erase(cur_ptr);
            }
        }else{
            lst.insert(cur_ptr, c);
        }
    }
    for(char c:lst){
        cout<<c;
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