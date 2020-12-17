#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n,m;
    cin>>n>>m;
    int sizes[n];
    for(int i=0;i<n;i++) cin>>sizes[i];
    sort(sizes, sizes+n);
    int paints[m];
    for(int i=0;i<m;i++) cin>>paints[i];
    unsigned ll wasted=0;
    for(int paint:paints){
        int low=0, high=n-1;
        while(low!=high){
            int mid=low+(high-low)/2;
            int size=sizes[mid];
            if(size<paint){
                low=mid+1;
            }else{
                high=mid;
            }
        }
        wasted+=(sizes[low]-paint);
    }
    cout<<wasted<<endl;
}