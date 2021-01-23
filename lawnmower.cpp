#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

int nx,ny;
double w;

void solve() {
    w/=2;
    vector<double> xis(nx);
    vector<double> yis(ny);
    for(int i=0;i<nx;i++) cin>>xis[i];
    for(int i=0;i<ny;i++) cin>>yis[i];
    sort(xis.begin(),xis.end());
    sort(yis.begin(),yis.end());
    bool y=true;
    y=y&&(xis[0]-w<=0);
    y=y&&(xis[nx-1]+w>=75);
    for(int i=1;i<nx;i++){
        y=y&&(xis[i]-w)<=xis[i-1]+w;
    }
    y=y&&(yis[0]-w<=0);
    y=y&&(yis[ny-1]+w>=100);
    for(int i=1;i<ny;i++){
        y=y&&(yis[i]-w)<=yis[i-1]+w;
    }
    cout<<(y?"YES":"NO")<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    while(cin>>nx>>ny>>w){
        if(nx==0&&ny==0&&w==0) break;
        solve();
    }
}