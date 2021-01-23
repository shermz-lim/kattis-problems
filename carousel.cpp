#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

struct Offer{
    int tickets;
    double price;
};

bool compare(Offer o1, Offer o2){
    double o1p=o1.price/o1.tickets;
    double o2p=o2.price/o2.tickets;
    if(o1p==o2p){
        return o1.tickets>o2.tickets;
    }else{
        return o1p<o2p;
    }
}

int main() {
    while(1){
        int n,m;
        cin>>n>>m;
        if(n==0&&m==0) break;
        vector<Offer> offers;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            if(a>m) continue;
            struct Offer o={a,b};
            offers.push_back(o);
        }
        sort(offers.begin(),offers.end(), compare);
        if(offers.size()==0){
            cout<<"No suitable tickets offered"<<endl;
        }else{
            Offer o=offers[0];
            cout<<"Buy "<<o.tickets<<" tickets for $"<<o.price<<endl;
        }
    }
}