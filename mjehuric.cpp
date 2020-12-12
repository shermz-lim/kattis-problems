#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int arr[5];
    for (int i=0;i<5;i++){
        cin>>arr[i];
    }
    bool sorted=false;
    while (!sorted){
        bool swapped=false;
        for (int i=0;i<4;i++){
            if (arr[i]>arr[i+1]){
                swapped=true;
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                for (int j=0;j<5;j++){
                    cout<<arr[j];
                    if(j!=4) cout<<" ";
                }
                cout<<endl;
            }
        }
        if (!swapped){
            sorted=true;
        }
    }
}