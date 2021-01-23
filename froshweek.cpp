#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

ll merge_sort(int i, int j, ll arr[]){
    if(i>=j){
        return 0;
    }else{
        int mid=(i+j)/2;
        ll c1=merge_sort(i,mid,arr);
        ll c2=merge_sort(mid+1,j,arr);
        int p1=i, p2=mid+1;
        ll c3=0;
        ll res[j-i+1];
        int idx=0;
        while(p1<=mid||p2<=j){
            if(p1>mid){
                res[idx]=arr[p2];
                p2++;
            }else if(p2>j){
                res[idx]=arr[p1];
                p1++;
            }else if(arr[p1]<=arr[p2]){
                res[idx]=arr[p1];
                p1++;
            }else{
                c3+=(mid-p1+1);
                res[idx]=arr[p2];
                p2++;
            }
            idx++;
        }
        for(int k=0;k<(j-i+1);k++){
            arr[k+i]=res[k];
        }
        return c1+c2+c3;
    }
}

void solve() {
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<merge_sort(0,n-1,arr)<<endl;
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