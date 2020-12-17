#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

struct Agency{
    ll cost;
    string name;
};

bool compare(Agency a1,Agency a2){
    if(a1.cost==a2.cost){
        return a1.name<a2.name;
    }else{
        return a1.cost<a2.cost;
    }
}

int main() {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,m,l;
        cin>>n>>m>>l;
        string line;
        getline(cin, line);
        vector<Agency> agencies;
        for(int j=0;j<l;j++){
            getline(cin, line);
            string name=line.substr(0,line.find(':'));
            string costs=line.substr(line.find(':')+1,line.size());
            int a=stoi(costs.substr(0,costs.find(',')));
            int b=stoi(costs.substr(costs.find(',')+1,costs.size()));
            ll cost=0;
            int curr=n;
            while(curr>m){
                int half=curr/2;
                if(half>=m){
                    if(b<(curr-half)*a){
                        cost+=b;
                    }else{
                        cost+=(curr-half)*a;
                    }
                    curr=half;
                } else{
                    cost+=(curr-m)*a;
                    curr=m;
                }
            }
            Agency agency={cost, name};
            agencies.push_back(agency);
        }
        sort(agencies.begin(),agencies.end(),compare);
        cout<<"Case "<<i<<endl;
        for(Agency a:agencies){
            cout<<a.name<<" "<<a.cost<<endl;
        }
    }
}