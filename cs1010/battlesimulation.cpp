#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string line;
    getline(cin, line);
    int i=0;
    while(i<line.size()){
        if(i+2<line.size()){
            bool combo=(
                (line[i]!=line[i+1])
                &&(line[i]!=line[i+2])
                &&(line[i+1]!=line[i+2])
            );
            if(combo){
                cout<<'C';
                i+=3;
                continue;
            }
        }
        char c=line[i];
        if(c=='R') cout<<'S';
        if(c=='B') cout<<'K';
        if(c=='L') cout<<'H';
        i++;
    }
    cout<<endl;
}