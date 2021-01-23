#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int bs(int arr[], int low, int high, int t){
    if(t>arr[high]) return high+1;
    while(low!=high){
        int mid=low+(high-low)/2;
        if(arr[mid]<t){
            low=mid+1;
        }else{
            high=mid;
        }
    }
    return low;
}

int main() {
    int n,h;
    cin>>n>>h;
    int num=n/2;
    int bottoms[num];
    int tops[num];
    for(int i=0;i<n;i++){
        int temp; cin>>temp;
        if(i%2==0){
            bottoms[i/2]=temp;
        }else{
            tops[i/2]=temp;
        }
    }
    sort(bottoms,bottoms+num);
    sort(tops,tops+num);
    int minObs=INT_MAX;
    int numMinObs=0;
    for(int i=1;i<=h;i++){
        int j=h-i+1;
        int numObs=0;
        numObs+=num-bs(bottoms, 0, num-1, i);
        numObs+=num-bs(tops, 0, num-1, j);
        if(numObs<minObs){
            minObs=numObs; numMinObs=1;
        }else if(numObs==minObs){
            numMinObs++;
        }
    }
    cout<<minObs<<" "<<numMinObs<<endl;
}