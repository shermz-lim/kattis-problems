#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    cin>>n;
    int arr[n];
    arr[0]=1;
    for (int i=2;i<1+n;i++){
        int d;
        cin>>d;
        arr[1+d]=i;
    }
    for (int i=0;i<n;i++){
        cout<<(arr[i])<<" ";
    }
    cout<<endl;
}