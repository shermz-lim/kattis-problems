#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

struct Call{
    int source,dest,start,duration;
};

int main() {
    while(1){
        int n,m;
        cin>>n>>m;
        if(n==0&&m==0) break;
        Call arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i].source>>arr[i].dest>>arr[i].start>>arr[i].duration;
        }
        for(int i=0;i<m;i++){
            int s,dur;
            cin>>s>>dur;
            int tot=0;
            for(int j=0;j<n;j++){
                int start=arr[j].start;
                int end=arr[j].start+arr[j].duration-1;
                int interEnd=s+dur-1;
                if(!(end<s||start>interEnd)){
                    tot++;
                }
            }
            cout<<tot<<endl;
        }
    }
}