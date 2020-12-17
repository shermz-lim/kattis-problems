#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int maxi=0;
    int i=0,j=0,concurrent=0;
    while(j<n){
        if(arr[j]<arr[i]+1000){
            concurrent++;
            maxi=max(maxi, concurrent);
            j++;
        }else{
            i++;j=i;
            concurrent=0;
        }
    }
    cout<<(maxi%k==0?maxi/k:(maxi/k+1))<<endl;
}   