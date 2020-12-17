#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string line;
    double startTime=0;
    double startDist=0;
    double currSpd=0;
    while(getline(cin, line)){
        if(line.size()>8){
            istringstream sin(line);
            string time,speedstr;
            sin>>time>>speedstr;
            int speed=stoi(speedstr);
            int h=stoi(time.substr(0,2));
            int m=stoi(time.substr(3,5));
            int s=stoi(time.substr(6,8));
            double currTime=h*3600+m*60+s;
            startDist+=(currTime-startTime)/3600*currSpd;
            startTime=currTime;
            currSpd=speed;
        }else{
            string time=line;
            int h=stoi(time.substr(0,2));
            int m=stoi(time.substr(3,5));
            int s=stoi(time.substr(6,8));            
            int currTime=h*3600+m*60+s;
            double dist=startDist+(currTime-startTime)/3600*currSpd;
            cout<<fixed;
            cout.precision(2);
            cout<<time<<" "<<dist<<" km"<<endl;
        }
    }
}