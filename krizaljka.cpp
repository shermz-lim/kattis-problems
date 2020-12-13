#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string a,b;
    cin>>a>>b;
    int inta=-1,intb=-1;
    for (int i=0;i<a.size();i++){
        for (int j=0;j<b.size();j++){
            if(a[i]==b[j]){
                inta=i; intb=j;
                break;
            }
        }
        if(inta>=0) break;
    }
    for (int i=0;i<b.size();i++){
        if(i==intb){
            cout<<a;
        } else {
            for (int j=0;j<a.size();j++){
                if(j==inta){
                    cout<<b[i];
                }else{
                    cout<<".";
                }
            }
        }
        cout<<endl;
    }    
}