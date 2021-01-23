#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n,m,a,c,x0;
    cin>>n>>m>>a>>c>>x0;
    int arr[n];
    ll prev=x0;
    for(int i=0;i<n;i++){        
        prev*=a;
        prev+=c;
        int xi=prev%m;
        arr[i]=xi;
        prev=xi;
    }
    int tot=0;
    for(int e:arr){
        int low=0,high=n-1;
        bool found=false;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==e){
                found=true; break;
            }else if(arr[mid]>e){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        if(found) tot++;
    }
    cout<<tot<<endl;
}