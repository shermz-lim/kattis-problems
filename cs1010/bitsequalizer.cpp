#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int c;
    cin>>c;
    string line;
    getline(cin, line);
    for(int p=1;p<=c;p++){
        string s,t;
        getline(cin, s);
        getline(cin, t);
        int ztoo=0,otoz=0,qtoz=0,qtoo=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'&&t[i]=='1'){
                ztoo++;
            }else if((s[i]=='1'&&t[i]=='0')){
                otoz++;
            }else if((s[i]=='?'&&t[i]=='0')){
                qtoz++;
            }else if((s[i]=='?'&&t[i]=='1')){
                qtoo++;
            }
        }
        cout<<"Case "<<p<<": ";
        int moves=min(ztoo,otoz);
        ztoo-=moves;
        otoz-=moves;
        if(otoz>0){
            int swapwithq=min(otoz,qtoo);
            moves+=swapwithq;
            otoz-=swapwithq;
            qtoz+=swapwithq;
            qtoo-=swapwithq;
            if(otoz>0) {
                cout<<-1<<endl; continue;
            }
        }
        moves+=ztoo;
        moves+=(qtoz+qtoo);
        cout<<moves<<endl;
    }
}