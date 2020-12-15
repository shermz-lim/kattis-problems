#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int y;
    cin>>y;
    int diff=y-2018;
    bool yes=false;
    for(int i=(diff*12+1);i<=(diff*12+12);i++){
        if((i-4)%26==0){
            yes=true;
        }
    }
    cout<<(yes?"yes":"no")<<endl;
}