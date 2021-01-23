#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    cin>>n;
    string res1[n], res2[n];
    string line;
    for(int i=0;i<n;i++) cin>>res1[i];
    for(int i=0;i<n;i++) cin>>res2[i];
    sort(res1, res1+n);
    sort(res2, res2+n);
    int i=0,j=0,tot=0;
    while(i<n&&j<n){
        if(res1[i]==res2[j]){
            i++;j++;tot++;
        }else if(res1[i]<res2[j]){
            i++;
        }else{
            j++;
        }
    }
    cout<<tot<<endl;
}