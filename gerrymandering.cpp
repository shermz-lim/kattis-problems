#include <bits/stdc++.h>
#include <map>

using namespace std;

#define ar array
#define ll long long

int main() {
    int p,d;
    cin>>p>>d;
    map<int,pair<int, int> > voteCount;
    for (int i=0;i<p;i++){
        int di,ai,bi;
        cin>>di>>ai>>bi;
        if (voteCount.find(di) != voteCount.end()){
            voteCount[di].first += ai;
            voteCount[di].second += bi;
        } else {
            voteCount[di] = make_pair(ai, bi);
        }
    }
    int V = 0, WA = 0, WB = 0;
    for (auto i=voteCount.begin();i!=voteCount.end();i++){
        int ai = i->second.first;
        int bi = i->second.second;
        int tot=ai + bi;        
        bool aWon = ai>bi;
        int wai=(aWon?(ai - ((tot/2) + 1)):ai);
        int wbi=(!aWon?(bi - ((tot/2) + 1)):bi);
        cout<<(aWon?"A ":"B ");
        cout<<wai<<" ";
        cout<<wbi<<endl;
        V += tot;
        WA += wai;
        WB += wbi;
    }
    cout<<(((double) abs(WA - WB))/V)<<endl;
}
