#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int k;
    cin>>k;
    int arr[k];
    for (int i=0;i<k;i++){
        cin>>arr[i];
    }
    int tot=0;
    int i=0;
    while(i<k){
        tot++;
        for(int j=1;j<=100;j++){
            if(j==arr[i]) i++;
            if(i>=k) break;
        }
    }
    cout<<tot<<endl;
}