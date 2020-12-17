#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

struct Prize{
    int cash;
    vector<int> stickers;
};

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m;
        cin>>n>>m;
        Prize prizes[n];
        for(int j=0;j<n;j++){
            int k;
            cin>>k;
            for(int l=0;l<k;l++){
                int x;
                cin>>x;
                prizes[j].stickers.push_back(x);
            }
            cin>>prizes[j].cash;
        }
        int stickers[m+1];
        for(int j=1;j<=m;j++){
            cin>>stickers[j];
        }
        int tot=0;
        for(int j=0;j<n;j++){
            Prize prize=prizes[j];
            int num=INT_MAX;
            for(int k=0;k<prize.stickers.size();k++){
                int type=prize.stickers[k];
                num=min(num, stickers[type]);
            }
            tot+=(num*prize.cash);
        }
        cout<<tot<<endl;
    }
}