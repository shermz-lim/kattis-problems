#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

double area(int xa,int ya,int xb,int yb,int xc, int yc) { 
   return abs((xa*(yb-yc) + xb*(yc-ya)+ xc*(ya-yb))/2.0);
} 

void solve() {
    int xa,ya,xb,yb,xc,yc;
    cin>>xa>>ya>>xb>>yb>>xc>>yc;
    double a=area(xa,ya,xb,yb,xc,yc);
    cout<<fixed<<setprecision(1)<<a<<endl;
    int n;
    cin>>n;
    int tot=0;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        double a1=area(x,y,xb,yb,xc,yc);
        double a2=area(xa,ya,x,y,xc,yc);
        double a3=area(xa,ya,xb,yb,x,y);
        if((a1+a2+a3)==a){
            tot++;
        }
    }
    cout<<tot<<endl;
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