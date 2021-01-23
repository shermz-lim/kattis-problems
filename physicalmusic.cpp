#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int arr[n];
        set<int> s;
        for(int i=0;i<n;i++) cin>>arr[i];
        int mini=n+1;
        for(int i=n-1;i>=0;i--){
            if(arr[i]>mini){
                s.insert(arr[i]);
            }
            mini=min(mini,arr[i]);
        }
        cout<<s.size()<<endl;
        for(int i:s){
            cout<<i<<endl;
        }
    }
}
