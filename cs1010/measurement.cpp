#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

struct Unit {
    string name1;
    string name2;
};

Unit units[8]={
    {"thou", "th"},
    {"inch", "in"},
    {"foot", "ft"},
    {"yard", "yd"},
    {"chain", "ch"},
    {"furlong", "fur"},
    {"mile", "mi"},
    {"league", "lea"},
};

double conversion[8]={
    0,1000,12,3,22,10,8,3
};

double find(double v, int start, int end){
    if(start==end){
        return v;
    }else if(start<end){
        return find(v/conversion[start+1], start+1, end);
    }else{
        return find(v*conversion[start], start-1, end);
    }
}

int main() {

    double v;
    string start,end; 
    cin>>v>>start>>end>>end;
    int startIdx, endIdx;
    for(int i=0;i<8;i++){
        if(units[i].name1==start||units[i].name2==start){
            startIdx=i;
        }
        if(units[i].name1==end||units[i].name2==end){
            endIdx=i;
        }
    }
    cout<<fixed;
    cout.precision(10);
    cout<<find(v, startIdx, endIdx)<<endl;
}