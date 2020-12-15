#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int curr=arr[0];
    vector<int> result;
    result.push_back(curr);
    for(int i=1;i<n;i++){
        if(arr[i]>curr){
            curr=arr[i];
            result.push_back(curr);
        }
    }
    cout<<result.size()<<endl;
    for(int j=0;j<result.size();j++){
        cout<<result[j];
        if(j!=(result.size()-1)) cout<<" ";
    }
    cout<<endl;
}