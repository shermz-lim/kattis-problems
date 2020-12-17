#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    int idx=1;
    while(cin>>n){
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr, arr+n);
        int m;
        cin>>m;
        cout<<"Case "<<idx<<":\n";
        for(int i=0;i<m;i++){
            int t;
            cin>>t;
            int minDiff=INT_MAX;
            int minDiffSum;
            int x=0,y=n-1;
            while(x<y){
                int sum=arr[x]+arr[y];
                int absDiff=abs(sum-t);
                if(absDiff<minDiff){
                    minDiff=absDiff;
                    minDiffSum=sum;
                }
                if(sum<t){
                    x++;
                }else if(sum>t){
                    y--;
                }else{
                    break;
                }
            }
            cout<<"Closest sum to "<<t;
            cout<<" is "<<minDiffSum<<"."<<endl;
        }
        idx++;
    }
}