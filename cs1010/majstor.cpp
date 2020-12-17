#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int r;
    cin>>r;
    char arr[r];
    for(int i=0;i<r;i++) cin>>arr[i];
    int n;
    cin>>n;
    int score=0, totalScore=0;
    char friends[n][r];
    for(int i=0;i<n;i++) {for(int j=0;j<r;j++){ cin>>friends[i][j]; }}
    for(int i=0;i<r;i++){
        int maxScore=0;
        for(char c:"SPR"){
            int cScore=0;
            for(int j=0;j<n;j++){
                char f=friends[j][i];
                if(f==c) cScore++;
                bool win=(c=='S'&&f=='P')||(c=='P'&&f=='R')||(c=='R'&&f=='S');
                if(win) cScore+=2;                
            }
            maxScore=max(maxScore,cScore);
            if(c==arr[i]) score+=cScore;
        }
        totalScore+=(maxScore);
    }
    cout<<score<<endl;
    cout<<totalScore<<endl;
}