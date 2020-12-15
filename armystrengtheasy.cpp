#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int ng,nm;
        cin>>ng>>nm;
        priority_queue<int> gqueue;
        priority_queue<int> mqueue;
        int x;
        for(int j=0;j<ng;j++){
            cin>>x;
            gqueue.push(x);
        }
        for(int j=0;j<nm;j++){
            cin>>x;
            mqueue.push(x);
        }
        while(!gqueue.empty()&&!mqueue.empty()){
            int gstr=gqueue.top();
            int mstr=mqueue.top();
            if(gstr<mstr){
                gqueue.pop();
            }else{
                mqueue.pop();
            }
        }
        cout<<(gqueue.empty()?"MechaGodzilla":"Godzilla")<<endl;
    }
}