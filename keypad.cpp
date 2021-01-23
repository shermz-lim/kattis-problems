#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

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
    int rows[r];
    int cols[c];
    for(int i=0;i<r;i++) rows[i]=0;
    for(int i=0;i<c;i++) cols[i]=0;    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]=='1'){
                rows[i]++;
                cols[j]++;
            }
        }
    }
    char res[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]=='0'&&(rows[i]>0&&cols[j]>0)){
                cout<<"impossible"<<endl;
                return;
            }
            if(rows[i]==0||cols[j]==0){
                res[i][j]='N';
            }else if(rows[i]==1||cols[j]==1){
                res[i][j]='P';
            }else{
                res[i][j]='I';
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<res[i][j];
        }
        cout<<endl;
    }    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
        cout<<"----------"<<endl;
    }
}