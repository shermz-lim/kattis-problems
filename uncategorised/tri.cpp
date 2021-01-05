#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

int answer(int a, int b, int c){
    if(a+b==c){
        return 0;
    }else if(a-b==c){
        return 1;
    }else if(a/b==c){
        return 2;
    }else if(a*b==c){
        return 3;
    }else{
        return -1;
    }
}

char ops[] = {'+','-','/','*'};

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    int ans=answer(a,b,c);
    if(ans>=0){
        cout<<a<<ops[ans]<<b<<"="<<c<<endl;
        return;
    }
    ans=answer(b,c,a);
    if(ans>=0){
        cout<<a<<"="<<b<<ops[ans]<<c<<endl;
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