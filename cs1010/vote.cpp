#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

struct Candidate{
    int id;
    int count;
};

bool compare(Candidate c1, Candidate c2){
    return c1.count>c2.count;
}

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        Candidate arr[n];
        int total=0;
        for(int j=0;j<n;j++) {
            arr[j].id=j+1;
            cin>>arr[j].count;
            total+=(arr[j].count);
        }
        sort(arr, arr+n, compare);
        if(arr[0].count==arr[1].count){
            cout<<"no winner"<<endl;
        }else{
            Candidate winner=arr[0];
            cout<<(winner.count>(total/2)?"majority":"minority")<<" winner "<<winner.id<<endl;
        }
    }
}