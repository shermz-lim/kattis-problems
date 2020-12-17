#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int d,m;
        cin>>d>>m;
        int arr[m];
        for(int j=0;j<m;j++) cin>>arr[j];
        int currd=0;
        int tot=0;
        for(int j=0;j<m;j++){
            if(currd==0&&arr[j]>=13) tot++;
            currd=(currd+(arr[j]%7))%7;
        }
        cout<<tot<<endl;
    }
}