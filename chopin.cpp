#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string line;
    int i=1;
    char arr[]={'A','B','C','D','E','F','G'};
    while(getline(cin, line)){
        if(line=="") break;
        istringstream sin(line);
        string a,b;
        sin>>a>>b;
        cout<<"Case "<<i<<": ";
        if(a.size()==1){
            cout<<"UNIQUE";
        }else{
            if(a[1]=='b'){
                int idx=(a[0]-'A')-1;
                idx=idx<0?7+idx:idx;
                cout<<arr[idx]<<"# "<<b;
            }else{
                int idx=((a[0]-'A')+1)%7;
                cout<<arr[idx]<<"b "<<b;
            }
        }
        cout<<endl;
        i++;
    }
}