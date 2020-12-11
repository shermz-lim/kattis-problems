#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int h,m;
    cin>>h>>m;
    int mins=h*60+m-45;
    mins=mins<0 ? (24 * 60 + mins) : mins;
    cout<<mins/60<<" "<<mins%60<<endl;
}
