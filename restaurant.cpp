#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

int n;

void solve() {
    int s1=0,s2=0;
    for(int i=0;i<n;i++){
        string inst; int m;
        cin>>inst>>m;
        if(inst=="DROP"){
            cout<<"DROP 2 "<<m<<endl;
            s2+=m;
        }else{
            if(s1>=m){
                cout<<"TAKE 1 "<<m<<endl;    
                s1 -= m;
            }else{
                if(s1>0){
                    cout<<"TAKE 1 "<<s1<<endl;
                    m-=s1;
                    s1=0;
                }
                cout<<"MOVE 2->1 "<<s2<<endl;
                s1+=s2;
                s2=0;                
                cout<<"TAKE 1 "<<m<<endl;
                s1-=m;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 0;
    // cin >> tc;
    while(1) {
        cin>>n;
        if(n==0) break;
        if(tc>0) cout<<endl;
        solve();
        tc++;
    }
}