#include <bits/stdc++.h>

using namespace std;

int main(){
    int s,n,m;
    cin>>s>>n>>m;
    int arr[s];
    for(int i=0;i<s;i++) cin>>arr[i];
    int peaks=0,valleys=0;
    for(int i=n-1;i<s-n+1;i++){
        bool peak=true;
        for(int j=0;j<n-1;j++){
            peak=peak&&(
                (arr[i+j]>arr[i+j+1])&&
                (arr[i-j]>arr[i-j-1])
            );
        }
        if(peak) peaks++;
    }
    for(int i=m-1;i<s-m+1;i++){
        bool val=true;
        for(int j=0;j<m-1;j++){
            val=val&&(
                (arr[i+j]<arr[i+j+1])&&
                (arr[i-j]<arr[i-j-1])
            );
        }
        if(val) valleys++;
    }
    cout<<peaks<<" "<<valleys<<endl;
}
