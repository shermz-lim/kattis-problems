#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve(int n) {
    stack<int> s;
    queue<int> q;
    priority_queue<int> pq;
    bool isS=true,isQ=true,isPQ=true;
    for(int i=0;i<n;i++){
        int c,x;
        cin>>c>>x;
        if(c==1){
            s.push(x);
            q.push(x);
            pq.push(x);
        }else{
            if(s.empty()) { 
                isS=false;isQ=false;isPQ=false;
                continue;
            }
            isS=isS&&s.top()==x;
            isQ=isQ&&q.front()==x;
            isPQ=isPQ&&pq.top()==x;
            s.pop(); q.pop(); pq.pop();
        }
    }
    if(isS&&!isQ&&!isPQ){
        cout<<"stack";
    }else if(!isS&&isQ&&!isPQ){
        cout<<"queue";
    }else if(!isS&&!isQ&&isPQ){
        cout<<"priority queue";
    }else if(!isS&&!isQ&&!isPQ){
        cout<<"impossible";
    }else{
        cout<<"not sure";
    }
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    while(cin>>n){
        solve(n);
    }
}