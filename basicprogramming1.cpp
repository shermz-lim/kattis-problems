#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    if(t==1){
        cout<<7;
    }else if(t==2){
        if(arr[0]==arr[1]){
            cout<<"Equal";
        }else if(arr[0]>arr[1]){
            cout<<"Bigger";
        }else{
            cout<<"Smaller";
        }
    }else if(t==3){
        vector<int> numbers;
        numbers.push_back(arr[0]);
        numbers.push_back(arr[1]);
        numbers.push_back(arr[2]);
        sort(numbers.begin(),numbers.end());
        cout<<numbers[1];
    }else if(t==4){
        unsigned ll sum=0;
        for(int e:arr){
            sum+=e;
        }
        cout<<sum;
    }else if(t==5){
        unsigned ll sum=0;
        for(int e:arr){
            if(e%2==0) sum+=e;
        }
        cout<<sum;        
    }else if(t==6){
        for(int e:arr){
            cout<<((char)('a'+e%26));
        }
    }else if(t==7){
        int idx=0;
        while(1){
            int oldIdx=idx;
            idx=arr[idx];
            if(idx==(n-1)){
                cout<<"Done"; break;
            } else if(idx>=n){
                cout<<"Out"; break;
            } else if(idx<0){
                cout<<"Cyclic"; break;
            }
            arr[oldIdx]=-1;
        }
    }
    cout<<endl;
}