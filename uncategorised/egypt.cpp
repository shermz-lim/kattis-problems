#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int a,b,c;    
    while(cin>>a>>b>>c, (a|b|c)!=0){
        int arr[3]={a,b,c};
        sort(arr,arr+3);
        a=arr[0],b=arr[1],c=arr[2];
        if((a*a+b*b)==(c*c)){
            cout<<"right"<<endl;
        }else{
            cout<<"wrong"<<endl;
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