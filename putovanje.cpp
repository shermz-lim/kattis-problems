#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n,c;
    cin>>n>>c;
    int weights[n];
    for(int i=0;i<n;i++) cin>>weights[i];
    int maxFruits=INT_MIN;
    for(int i=0;i<n;i++){
        int tot=0;
        int fruits=0;
        for(int j=i;j<n;j++){
            if(tot+weights[j]>c){
                continue;
            }else{
                tot+=weights[j];
                fruits++;
            }
        }
        maxFruits=max(maxFruits,fruits);
    }
    cout<<maxFruits<<endl;
}