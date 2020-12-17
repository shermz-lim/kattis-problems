#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    cin>>n;
    int a=0,b=0,c=0;
    char aArr[3]={'A','B','C'};
    char bArr[4]={'B','A','B','C'};
    char cArr[6]={'C','C','A','A','B','B'};
    for (int i=0;i<n;i++){
        char in;
        cin>>in;
        b+=bArr[i%4]==in?1:0;
        a+=aArr[i%3]==in?1:0;
        c+=cArr[i%6]==in?1:0;
    }
    int largest=max(a, max(b, c));
    cout<<largest<<endl;
    if(a==largest) cout<<"Adrian"<<endl;
    if(b==largest) cout<<"Bruno"<<endl;
    if(c==largest) cout<<"Goran"<<endl;
}