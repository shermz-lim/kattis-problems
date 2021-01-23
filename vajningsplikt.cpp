#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string a,b,c;
    cin>>a>>b>>c;
    vector<string> arr = {"North", "East", "South", "West"};
    int idx=find(arr.begin(), arr.end(), a)-arr.begin();
    string straight=arr[(idx+2)%4];
    string left=arr[(idx+1)%4];
    string right=arr[(idx+3)%4];
    bool cond1=(straight==b)&&(c==right);
    bool cond2=(left==b)&&((c==straight)||(c==right));
    cout<<((cond1||cond2)?"Yes":"No")<<endl;
}