#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

struct Efficiency{
    double speed;
    double eff;
};

int main() {
    double c,x,m;
    cin>>c>>x>>m;
    Efficiency arr[6];
    for(int i=0;i<6;i++) cin>>arr[i].speed>>arr[i].eff;
    int idx=-1;
    for(int i=0;i<6;i++){
        double time=m/arr[i].speed;
        double gallonsNeeded=m/arr[i].eff;
        double gallons=c/2-time*x;
        if((gallons-gallonsNeeded)>=(1.0e-6)){
            idx=i;
        }
    }
    if(idx<0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES "<<arr[idx].speed<<endl;
    }
}