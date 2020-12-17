#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int r,c;
    cin>>r>>c;
    int rows[r];
    int cols[c];
    for(int i=0;i<r;i++) cin>>rows[i];
    for(int i=0;i<c;i++) cin>>cols[i];
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int maxRow=rows[i];
            int maxCol=cols[j];
            arr[i][j]=min(maxRow,maxCol);
        }
    }
    bool satisfied=true;
    for(int i=0;i<r;i++){
        int maxRow=rows[i];
        int noHave=true;
        for(int j=0;j<c;j++){
            if(arr[i][j]==maxRow){
                noHave=false;
            }
        }
        if(noHave){
            satisfied=false;
        }
    }
    for(int i=0;i<c;i++){
        int maxCol=cols[i];
        int noHave=true;
        for(int j=0;j<r;j++){
            if(arr[j][i]==maxCol){
                noHave=false;
            }
        }
        if(noHave){
            satisfied=false;
        }
    }    
    cout<<(satisfied?"possible":"impossible")<<endl;
}