#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n,k,r;
    cin>>n>>k>>r;
    int left=0,right=0;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    unordered_map<int,int> req_freq;
    unordered_map<int,int> freq;
    unordered_set<int> sat;
    for(int i=0;i<r;i++){
        int b,q;
        cin>>b>>q;
        req_freq[b]=q;
        freq[b]=0;
    }
    int smallest=INT_MAX;
    while(right<n){        
        if(sat.size()<req_freq.size()){
            int di=arr[right];
            if(req_freq.find(di)!=req_freq.end()){
                freq[di]++;
                if(freq[di]>=req_freq[di]){
                    sat.insert(di);
                }
            }
        }
        if(sat.size()==req_freq.size()){
            while(sat.size()==req_freq.size()){
                int di=arr[left];
                if(req_freq.find(di)!=req_freq.end()){
                    freq[di]--;
                    if(freq[di]<req_freq[di]){
                        sat.erase(di);
                    }                    
                }
                left++;
            }
            smallest=min(smallest,right-left+2);
        }
        right++;
    }
    cout<<(smallest==INT_MAX?"impossible":to_string(smallest))<<endl;
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