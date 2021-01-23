#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    char arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    int directions[8][2]={
        {-2,-1}, {-1,-2}, {-2,1}, {-1,2},
        {2,-1}, {1,-2}, {2,1}, {1,2},
    };
    bool valid=true;
    int tot=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]=='k'){
                tot++;
                for(int k=0;k<8;k++){
                    int newX=i+directions[k][0];
                    int newY=j+directions[k][1];
                    bool validDir=(newX>=0&&newX<=4)&&(newY>=0&&newY<=4);
                    if(validDir&&arr[newX][newY]=='k'){
                        valid=false;
                    }
                }
            }
        }
    }
    valid=valid&&(tot==9);
    cout<<(valid?"valid":"invalid")<<endl;
}