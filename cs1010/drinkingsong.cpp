#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    string bev;
    cin>>n>>bev;
    for(int i=n;i>=1;i--){
        bool p=i!=1;
        string bottle=p?"bottles":"bottle";
        cout<<i<<" "<<bottle<<" of "<<bev<<" on the wall, ";
        cout<<i<<" "<<bottle<<" of "<<bev<<"."<<endl;
        cout<<"Take "<<(i==1?"it":"one")<<" down, pass it around, ";
        cout<<(i==1?"no more":to_string(i-1));
        cout<<" bottle"<<(i-1==1?"":"s")<<" of "<<bev;
        cout<<(i==1?".":" on the wall.")<<endl;
        if(i!=1){ cout<<endl; }
    }
}