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
        bool yes=false;
        sort(arr, arr+n);
        int i=0,j=n-1;
        while(i<j){
            int x=arr[i],y=arr[j];
            if(x==y) break;
            if(x+y==7777) {
                yes=true; break;
            }else if(x+y>7777){
                j--;
            }else{
                i++;
            }
        }
        cout<<(yes?"Yes":"No");
    }else if(t==2){
        unordered_set<int> present;
        bool dup=false;
        for(int e:arr){
            if(present.find(e)!=present.end()){
                dup=true; break;
            }else{
                present.insert(e);
            }
        }
        cout<<(dup?"Contains duplicate":"Unique");
    }else if(t==3){
        unordered_map<int,int> freq;
        for(int e:arr){
            freq[e]++;
        }
        bool found=false;
        for(auto i:freq){
            if(i.second>n/2){
                cout<<i.first; found=true; break;
            }
        }
        if(!found) cout<<"-1";
    }else if(t==4){
        sort(arr, arr+n);
        if(n%2==0){
            cout<<arr[n/2-1]<<" "<<arr[n/2];
        }else{
            cout<<arr[n/2];
        }
    }else if(t==5){
        sort(arr, arr+n);
        bool first=true;
        for(int e:arr){
            if(e>=100&&e<=999){
                if(!first) cout<<" ";
                else first=false;
                cout<<e;
            }
        }
    }
    cout<<endl;
}