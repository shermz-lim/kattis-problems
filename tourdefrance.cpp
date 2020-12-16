#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int f,r;
    while(1){
        cin>>f;
        if(f==0) break;
        cin>>r;
        double fronts[f],rears[r];
        for(int i=0;i<f;i++) cin>>fronts[i];
        for(int i=0;i<r;i++) cin>>rears[i];
        vector<double> ratios;
        for(int i=0;i<f;i++){
            for(int j=0;j<r;j++){
                ratios.push_back(rears[j]/fronts[i]);
            }
        }
        sort(ratios.begin(),ratios.end());
        double maxSpread=-1;
        for(int i=0;i<ratios.size()-1;i++){
            maxSpread=max(maxSpread, ratios[i+1]/ratios[i]);
        }
        cout<<fixed;
        cout.precision(2);
        cout<<maxSpread<<endl;
    }
}