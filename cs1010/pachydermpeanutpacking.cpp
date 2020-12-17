#include <bits/stdc++.h>
#include <vector>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    while(cin>>n){
        if(n==0) break;
        vector<tuple<double,double,double,double> > smallBoxes;
        vector<tuple<double,double,double,double> > medBoxes;
        vector<tuple<double,double,double,double> > largeBoxes;
        for(int i=0;i<n;i++){
            double x1,y1,x2,y2;
            cin>>x1>>y1>>x2>>y2;
            string size;
            cin>>size;
            if(size=="small") smallBoxes.push_back(make_tuple(x1,y1,x2,y2));
            if(size=="medium") medBoxes.push_back(make_tuple(x1,y1,x2,y2));
            if(size=="large") largeBoxes.push_back(make_tuple(x1,y1,x2,y2));
        }
        int m;
        cin>>m;
        for(int i=0;i<m;i++){
            double x,y; string size;
            cin>>x>>y>>size;
            bool inbox=false;
            for(int i=0;i<smallBoxes.size();i++){
                auto box=smallBoxes[i];
                double x1,y1,x2,y2;
                x1=get<0>(box); y1=get<1>(box); x2=get<2>(box); y2=get<3>(box);
                if(x>=x1&&x<=x2&&y>=y1&&y<=y2) {
                    inbox=true;
                    cout<<size<<" "<<(size=="small"?"correct":"small")<<endl;
                }
            }
            for(int i=0;i<medBoxes.size();i++){
                auto box=medBoxes[i];
                double x1,y1,x2,y2;
                x1=get<0>(box); y1=get<1>(box); x2=get<2>(box); y2=get<3>(box);
                if(x>=x1&&x<=x2&&y>=y1&&y<=y2) {
                    inbox=true;
                    cout<<size<<" "<<(size=="medium"?"correct":"medium")<<endl;
                }
            }
            for(int i=0;i<largeBoxes.size();i++){
                auto box=largeBoxes[i];
                double x1,y1,x2,y2;
                x1=get<0>(box); y1=get<1>(box); x2=get<2>(box); y2=get<3>(box);
                if(x>=x1&&x<=x2&&y>=y1&&y<=y2) {
                    inbox=true;
                    cout<<size<<" "<<(size=="large"?"correct":"large")<<endl;
                }
            }                        
            if(!inbox){
                cout<<size<<" "<<"floor"<<endl;
            }
        }
        cout<<endl;
    }
}