#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n,y;
    cin>>n>>y;
    bool found[1000]={false};
    for(int i=0;i<y;i++){
        int temp;cin>>temp;
        found[temp]=true;
    }
    int tot=0;
    for(int i=0;i<n;i++){
        if(found[i]){
            tot++;
        }else{
            cout<<i<<endl;
        }
    }
    cout<<"Mario got "<<tot<<" of the dangerous obstacles."<<endl;
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