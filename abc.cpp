#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr, arr+3);
    char c;
    for (int i=0;i<3;i++){
        cin>>c;
        cout<<arr[c-'A'];
        if(i!=2) cout<<" ";
    }
    cout<<endl;
}