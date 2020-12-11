#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int curr, in;
        cin>>curr;
        cin>>in;
        int tot = 0;
        while(in!=0){
            if(in>2*curr){
                tot += (in - 2*curr);
            }
            curr=in;
            cin>>in;
        }
        cout<<tot<<endl;
    }
}