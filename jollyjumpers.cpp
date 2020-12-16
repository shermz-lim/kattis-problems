#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string line;
    while(getline(cin, line)){
        istringstream sin(line);
        int n;
        sin>>n;
        int arr[n];
        for(int i=0;i<n;i++) sin>>arr[i];
        bool diffs[n];
        for(int i=1;i<=n-1;i++) diffs[i]=false;
        for(int i=0;i<n-1;i++){
            diffs[abs(arr[i]-arr[i+1])]=true;
        }
        bool jumper=true;
        for(int i=1;i<=n-1;i++){
            jumper=jumper&&diffs[i];
        }
        cout<<(jumper?"Jolly":"Not jolly")<<endl;
    }
}