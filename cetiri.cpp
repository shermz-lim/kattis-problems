#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr, arr+3);
    int d1=arr[1]-arr[0];
    int d2=arr[2]-arr[1];
    if(d1==d2){
        cout<<(arr[2]+d2);
    }else if(d1<d2){
        cout<<(arr[1]+d1);
    }else{
        cout<<(arr[0]+d2);
    }
    cout<<endl;
}