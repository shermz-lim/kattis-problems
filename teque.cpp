#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n;
    cin>>n;
    deque<int> q1, q2;
    while(n--){
        string c; int x;
        cin>>c>>x;
        if(c=="push_back"){
            q2.push_back(x);
            if(q1.size()<q2.size()){
                q1.push_back(q2.front());
                q2.pop_front();
            }
        }else if(c=="push_front"){
            if(q1.size()!=q2.size()){
                q2.push_front(q1.back()); q1.pop_back();
            }            
            q1.push_front(x);
        }else if(c=="push_middle"){
            if(q1.size()!=q2.size()){
                q2.push_front(x);
            }else{
                q1.push_back(x);
            }
        }else{
            if(x>=q1.size()){
                cout<<q2[x-q1.size()]<<endl;
            }else{
                cout<<q1[x]<<endl;
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