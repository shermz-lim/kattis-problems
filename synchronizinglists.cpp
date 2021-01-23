#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    while(1){
        cin>>n;
        if (n==0) break;        
        int arr1[n], arr2[n], arrs1[n];
        for(int i=0;i<n;i++){
            cin>>arr1[i];
            arrs1[i]=arr1[i];
        }
        for(int i=0;i<n;i++){
            cin>>arr2[i];
        }
        sort(arrs1, arrs1+n);
        sort(arr2, arr2+n);
        unordered_map<int, int> elemIdx;
        for (int i=0;i<n;i++){
            elemIdx[arrs1[i]]=i;
        }
        for (int i=0;i<n;i++){
            cout<<arr2[elemIdx[arr1[i]]]<<endl;
        }
        cout<<endl;
    }
}