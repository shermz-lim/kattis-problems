#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int start,end;
    cin>>start>>end;
    int absdiff=abs(end-start);
    int diff=(end-start);
    if(absdiff==180){
        cout<<180;
    }else if(absdiff>180){
        cout<<(diff<0?(360+diff):-1*(360-diff));
    }else{
        cout<<diff;
    }
    cout<<endl;
}