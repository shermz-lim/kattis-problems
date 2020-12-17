#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string line;
    while(getline(cin, line)){
        if(line=="") break;
        istringstream sin(line);
        string m,d,y,trise,tset;
        sin>>m>>d>>y>>trise>>tset;
        int triseh=stoi(trise.substr(0, trise.find(":")));
        int trisem=stoi(trise.substr(trise.find(":")+1, trise.size()));
        int tseth=stoi(tset.substr(0, tset.find(":")));
        int tsetm=stoi(tset.substr(tset.find(":")+1, tset.size()));
        int mins=(tseth*60+tsetm)-(triseh*60+trisem);
        cout<<m<<" "<<d<<" "<<y<<" "<<(mins/60)<<" hours "<<(mins%60)<<" minutes"<<endl;
    }
}