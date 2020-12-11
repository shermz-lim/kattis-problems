#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

bool compare(pair<int, string> x, pair<int, string> y) {
    return x.first < y.first;
}

int main() {
    int n;
    cin>>n;
    vector<pair<int, string> > arr;
    for (int i=0;i<n;i++){
        string in1, in2;
        cin>>in1>>in2;
        bool in1c = (in1[0]-'a')>=0 && (in1[0]-'a')<=26;
        string col=in1c?in1:in2;
        int rad=in1c?stoi(in2,nullptr):stoi(in1,nullptr)/2;
        arr.push_back(make_pair(rad,col));
    }
    sort(arr.begin(), arr.end(), compare);
    for (int i=0;i<arr.size();i++){
        cout<<arr[i].second<<endl;
    }
}