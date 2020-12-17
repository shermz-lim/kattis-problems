#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n,m;
    cin>>n;
    int teaPrices[n];
    for(int i=0;i<n;i++){ cin>>teaPrices[i]; }
    cin>>m;
    int topPrices[m];
    for(int i=0;i<m;i++){ cin>>topPrices[i]; }
    int minPrice=INT_MAX;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        for(int j=0;j<k;j++){
            int validTop;
            cin>>validTop;
            validTop--;
            int price=teaPrices[i]+topPrices[validTop];
            minPrice=min(minPrice, price);
        }
    }
    int x;
    cin>>x;
    cout<<(max(x/minPrice-1,0))<<endl;
}