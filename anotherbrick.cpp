#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int h,w,n;
    cin>>h>>w>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int currw=0;
    bool y=true;
    for(int i=0;i<n;i++){
        int bw=arr[i];
        currw+=bw;
        if(currw>w){
            y=false;
            break;
        }else if(currw==w){
            currw=0;
        }
    }
    cout<<(y?"YES":"NO")<<endl;
}