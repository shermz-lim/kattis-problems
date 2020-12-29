#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

int n;

void solve() {
    vector<string> fs;
    vector<char> hs;
    string f;
    for(int i=0;i<n;i++){
        getline(cin,f);
        fs.push_back(f);
        int h=0;
        for(auto c:f){
            h^=c;
        }
        hs.push_back(h);
    }    
    int tot=0;
    int col=0;
    for(int i=0;i<n;i++){
        bool unique=true;
        for(int j=i+1;j<n;j++){
            if(hs[i]==hs[j]){
                if(fs[i]==fs[j]){
                    unique=false;
                }else{
                    col++;
                }                
            }
        }
        if(unique){
            tot++;
        }
    }
    cout<<tot<<" "<<col<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string line;
    while(getline(cin, line)){
        n = stoi(line);
        if(n==0) break;
        solve();
    }
}