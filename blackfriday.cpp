#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    cin>>n;
    vector<int> arr[7];
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        arr[a].push_back(i);
    }
    bool none=true;
    for(int i=6;i>=1;i--){
        if(arr[i].size()==1){
            cout<<arr[i][0]<<endl;
            none=false;break;
        }
    }
    if(none) cout<<"none"<<endl;
}