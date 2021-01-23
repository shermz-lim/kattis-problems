#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        int s;
        cin>>s;
        vector<int> reds; vector<int> blues;
        for (int j=0;j<s;j++){
            int l; char c;
            cin>>l>>c;
            if (c=='R'){
                reds.push_back(l);
            } else {
                blues.push_back(l);
            }
        }
        sort(reds.begin(), reds.end(), greater<int>());
        sort(blues.begin(), blues.end(), greater<int>());
        int num = min(reds.size(), blues.size());
        int len = 0;
        for (int j=0;j<num;j++){
            len+=reds[j]; len+=blues[j];
        }
        cout<<"Case #"<<i<<": "<<(len - num*2)<<endl;
    }
}