#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int x,y;
    while (1){
        cin>>x>>y;
        if (x==0&&y==0) break;
        if (x+y==13){
            cout<<"Never speak again.";
        } else if (x>y){
            cout<<"To the convention.";
        } else if (x<y){
            cout<<"Left beehind.";
        } else if (x==y){
            cout<<"Undecided.";
        }
        cout<<endl;
    }
}