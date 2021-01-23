#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    cin>>n;
    double m,s;
    double tot=0, tots=0;
    for (int i=0;i<n;i++){
        cin>>m>>s;
        tot+=(m*60);
        tots+=s;
    }    
    double ans=tots/tot;
    cout.precision(10);
    if(ans<=1){
        cout<<"measurement error"<<endl;
    }else{
        cout<<tots/tot<<endl;
    }
}