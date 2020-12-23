#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n;
    cin>>n;
    char vals[n];
    for(int i=0;i<n;i++) cin>>vals[i];
    string line;
    getline(cin,line);
    getline(cin,line);
    istringstream sin(line);
    char i;
    stack<char> s;
    while(sin>>i){
        if(i=='*'){
            bool op1=s.top()=='T'; s.pop();
            bool op2=s.top()=='T'; s.pop();
            s.push(op1&&op2?'T':'F');
        }else if(i=='+'){
            bool op1=s.top()=='T'; s.pop();
            bool op2=s.top()=='T'; s.pop();
            s.push(op1||op2?'T':'F');
        }else if(i=='-'){
            bool op1=s.top()=='T'; s.pop();
            s.push(!op1?'T':'F');
        }else{
            s.push(vals[i-'A']);
        }
    }
    cout<<s.top()<<endl;
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