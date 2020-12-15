#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string line;
    getline(cin, line);
    istringstream sin(line);
    char c;
    int idx=0;
    int tot=0;
    while(sin>>c){
        if(isupper(c)){
            if(idx%4==0){
                idx++;
            }else{
                int nop=(idx/4+1)*4-idx;
                tot+=nop;
                idx+=(nop+1);
            }
        }else{
            idx++;
        }
    }
    cout<<tot<<endl;
}