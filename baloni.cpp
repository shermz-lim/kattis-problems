#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    cin>>n;
    int tokens[1000001];
    for(int i=0;i<1000001;i++){
        tokens[i]=0;
    }    
    for(int i=0;i<n;i++){
        int h;
        cin>>h;
        if(tokens[h]>0){
            tokens[h]--;
        }
        tokens[h-1]++;
    }
    int tot=0;
    for(int i=0;i<1000001;i++){
        tot+=tokens[i];
    }
    cout<<tot<<endl;
}