#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    while(1){
        int k,m;
        cin>>k;
        if(k==0) break;
        cin>>m;
        int arr[k];
        for(int i=0;i<k;i++) cin>>arr[i];
        bool y=true;
        for(int i=0;i<m;i++){
            int c,r;
            cin>>c>>r;
            int tot=0;
            for(int j=0;j<c;j++){
                int x;
                cin>>x;
                if(find(arr,arr+k,x)!=(arr+k)){
                    tot++;
                }
            }
            if(tot<r) { y=false; }
        }
        cout<<(y?"yes":"no")<<endl;
    }
}