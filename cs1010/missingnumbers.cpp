#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    cin>>n;
    int lastCorrect=0;
    bool corr=true;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x-lastCorrect==1){
            lastCorrect=x;
        }else{
            corr=false;
            for (int j=lastCorrect+1;j<x;j++){
                cout<<j<<endl;
            }
            lastCorrect=x;
        }
    }
    if (corr) cout<<"good job"<<endl;
}