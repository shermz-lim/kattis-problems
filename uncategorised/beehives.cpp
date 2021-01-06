#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

double d;
int n;

double dist(double x1,double y1,double x2,double y2){
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

void solve() {
    vector<pair<double,double> > arr;
    for(int i=0;i<n;i++){
        double x,y;
        cin>>x>>y;
        arr.push_back(make_pair(x,y));
    }
    int tot_sour=0;
    for(int i=0;i<n;i++){
        bool sour=false;
        for(int j=0;j<n;j++){
            if(i!=j){
                auto xy1=arr[i];
                auto xy2=arr[j];
                if(dist(xy1.first,xy1.second,xy2.first,xy2.second)<=d){
                    sour=true;
                }
            }
        }
        if(sour){
            tot_sour++;
        }
    }
    cout<<tot_sour<<" sour, ";
    cout<<(arr.size()-tot_sour)<<" sweet"<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    while(cin>>d>>n, d!=0&&n!=0){
        solve();
    }
}