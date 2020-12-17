#include <bits/stdc++.h>
#include <map>

using namespace std;

#define ar array
#define ll long long

int main() {
    map<int, int> scores;
    for (int i=1;i<=5;i++){
        int tot = 0;
        for (int j=0;j<4;j++){
            int s;
            cin>>s;
            tot+=s;
        }
        scores[i]=tot;
    }
    int l=0, lidx=1;
    for (auto i=scores.begin();i!=scores.end();++i){
        if (i->second>l) {
            l=i->second;
            lidx=i->first;
        }
    }
    cout<<lidx<<" "<<l<<endl;
}