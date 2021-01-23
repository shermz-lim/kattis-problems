#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

ll count(string &arr, int i, int j){
    if(i>=j){
        return 0;
    }
    int mid=(j-i)/2+i;
    ll c1=count(arr,i,mid);
    ll c2=count(arr,mid+1,j);
    string res="";
    ll c3=0;
    int x=i, y=mid+1;
    while(x<=mid||y<=j){
        if(x>mid){
            res.push_back(arr[y]);
            y++;
        }else if(y>j){
            res.push_back(arr[x]);
            x++;
        }else if(arr[x]>arr[y]){
            c3+=(mid-x+1);
            res.push_back(arr[y]);
            y++;
        }else{
            res.push_back(arr[x]);
            x++;
        }
    }
    for(int k=0;k<(j-i+1);k++){
        arr[i+k]=res[k];
    }
    return c1+c2+c3;
}

void solve() {
    string arr;
    cin>>arr;
    cout<<count(arr, 0, arr.size()-1)<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}