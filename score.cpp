#include <bits/stdc++.h>

using namespace std;

int time_to_sec(string time){
    int pos=time.find(':');
    int m=stoi(time.substr(0,pos));
    int s=stoi(time.substr(pos+1,2));
    return s+(m*60);
}

string sec_to_time(int sec){
    int s=sec%60;
    int m=sec/60;
    string time=to_string(m) + ":" + (s<10?"0":"") + to_string(s);
    return time;
} 

int main(){
    int n; cin>>n;
    char status='T';
    int ht=0,at=0,hs=0,as=0,last=0;
    while(n--){
        char player; int score; string time;
        cin>>player>>score>>time;
        int sec=time_to_sec(time);
        if(player=='A'){
            as+=score;
        }else{
            hs+=score;
        }
        char new_status=as==hs?'T':as>hs?'A':'H';
        if(new_status!=status){
            if(status=='A'){
                at+=(sec-last);
            }else if(status=='H'){
                ht+=(sec-last);
            }
            last=sec;
        }
        status=new_status;
    }
    int end=1920;
    if(status=='A'){
        at+=(end-last);
    }else if(status=='H'){
        ht+=(end-last);
    }
    cout<<(as>hs?'A':'H')<<" ";
    cout<<sec_to_time(ht)<<" ";
    cout<<sec_to_time(at)<<endl;
}
