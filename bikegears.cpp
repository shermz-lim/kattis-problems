#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

struct Gear{
    ll front;
    ll back;
};

bool compare(Gear g1, Gear g2){
    if(g1.front*g2.back==g2.front*g1.back){
        return g1.front<g2.front;
    }else{
        return g1.front*g2.back<g2.front*g1.back;
    }
}

int main() {
    int f,b;
    cin>>f>>b;
    ll fronts[f],backs[b];
    for(int i=0;i<f;i++) cin>>fronts[i];
    for(int i=0;i<b;i++) cin>>backs[i];
    vector<Gear> gears;
    for(int i=0;i<f;i++){
        for(int j=0;j<b;j++){
            Gear gear = {fronts[i],backs[j]};
            gears.push_back(gear);
        }
    }
    sort(gears.begin(),gears.end(),compare);
    for(Gear g:gears){
        cout<<"("<<g.front<<","<<g.back<<")"<<endl;
    }
}