#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int r,c;
    cin>>r>>c;
    char arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    vector<string> words;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]!='#'){
                if(i==0||arr[i-1][j]=='#'){
                    int k=i+1;
                    string word;
                    word.push_back(arr[i][j]);
                    while(k<r&&arr[k][j]!='#'){
                        word.push_back(arr[k][j]);
                        k++;
                    }
                    if(word.size()>1){
                        words.push_back(word);
                    }
                }
                if(j==0||arr[i][j-1]=='#'){
                    int k=j+1;
                    string word;
                    word.push_back(arr[i][j]);
                    while(k<c&&arr[i][k]!='#'){
                        word.push_back(arr[i][k]);
                        k++;
                    }
                    if(word.size()>1){
                        words.push_back(word);
                    }
                }
            }
        }
    }    
    sort(words.begin(),words.end());
    cout<<words[0]<<endl;
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