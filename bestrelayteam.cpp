#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

struct Runner {
    string name;
    double first;
    double other;
};

bool compare(Runner r1, Runner r2){
    return r1.other<r2.other;
}

int main() {
    int n;
    cin>>n;
    Runner arr[n];
    for(int i=0;i<n;i++) cin>>arr[i].name>>arr[i].first>>arr[i].other;
    sort(arr, arr+n, compare);
    double fastestTime=1000000; vector<string> fastestOrder;
    for(int i=0;i<n;i++){
        double time=0; vector<string> order;
        order.push_back(arr[i].name);
        time+=(arr[i].first);
        int c=1;
        for(int j=0;j<n;j++){
            if(i!=j){
                time+=(arr[j].other);
                order.push_back(arr[j].name);
                c++;
                if(c==4) break;
            }
        }
        if(time<fastestTime){
            fastestTime=time;
            fastestOrder=order;
        }
    }
    cout << fixed;
    cout.precision(10);
    cout<<fastestTime<<endl;
    for(auto i : fastestOrder) {
        cout<<i<<endl;
    }
}