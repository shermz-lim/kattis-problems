#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

string lower(string word){
    string newword="";
    for(int i=0;i<word.size();i++){
        newword.push_back(tolower(word[i]));
    }
    return newword;
}

void solve(int n) {
    string line; getline(cin,line);
    map<string,int> count;
    for(int i=0;i<n;i++){
        string line;
        getline(cin,line);
        string typ;
        istringstream sin(line);
        while(sin>>typ) { }
        count[lower(typ)]++;
    }
    for(auto i:count){
        cout<<i.first<<" | "<<i.second<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    while(1){
        int n;
        cin>>n;
        if(n==0)break;
        cout<<"List "<<tc<<":"<<endl;
        solve(n);
        tc++;
    }
}