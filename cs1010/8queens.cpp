#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    bool arr[8][8];
    int q=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            char temp;
            cin>>temp;
            if(temp=='*'){
                arr[i][j]=true;
                q++;
            }else{
                arr[i][j]=false;
            }
        }
    }
    bool valid=q==8;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(arr[i][j]){
                for(int k=1;k<8;k++){
                    int up=i-k;
                    int down=i+k;
                    int left=j-k;
                    int right=j+k;
                    if(up>=0&&arr[up][j]) valid=false;
                    if(up>=0&&left>=0&&arr[up][left]) valid=false;
                    if(up>=0&&right<8&&arr[up][right]) valid=false;
                    if(left>=0&&arr[i][left]) valid=false;
                    if(right<8&&arr[i][right]) valid=false;
                    if(down<8&&arr[down][j]) valid=false;
                    if(down<8&&left>=0&&arr[down][left]) valid=false;
                    if(down<8&&right<8&&arr[down][right]) valid=false;
                }
            }
        }
    }
    cout<<(valid?"valid":"invalid")<<endl;
}