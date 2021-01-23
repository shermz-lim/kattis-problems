#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    string line;
    getline(cin,line);
    int l=line.size();
    int m=ceil(sqrt(l));
    for(int i=0;i<(m*m-l);i++) line.push_back('*');
    char arr[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            arr[j][m-i-1]=line[i*m+j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]!='*'){
                cout<<arr[i][j];
            }            
        }
    }
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;
    string line;
    getline(cin,line);    
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}