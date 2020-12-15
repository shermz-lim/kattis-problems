#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int dist=abs(x1-x2)+abs(y1-y2);
    int fuel;
    cin>>fuel;
    bool y=(fuel>=dist)&&((fuel-dist)%2==0);
    cout<<(y?"Y":"N")<<endl;
}