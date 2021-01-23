#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

#define ar array
#define ll long long

int main() {
    string events;
    getline(cin, events);
    int tot=0;
    int n=events.size();
    bool others[26];
    for(int i=0;i<n-1;i++){
        for(int i=0;i<26;i++) others[i]=false;
        for(int j=i+1;j<n;j++){
            bool valid1=(
                (events[i]!=events[j])
                &&!others[events[i]-'a']                
            );
            bool valid2=(
                !others[events[j]-'a']
            );
            if(!valid1) break;
            if(valid1&&valid2) tot++;
            others[events[j]-'a']=true;
        }
    }
    cout<<tot<<endl;
}