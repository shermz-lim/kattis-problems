#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    char arr[7][7];
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            if((i<2&&(j<2||j>4))||(i>4&&(j<2||j>4))){
                arr[i][j]=' ';
            } else {
                cin>>arr[i][j];
            }
        }
    }
    int t=0;
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            if(arr[i][j]!='o') continue;
            if(i-2>=0){
                t+=(int)(arr[i-1][j]=='o'&&arr[i-2][j]=='.');
            }
            if(i+2<7){
                t+=(int)(arr[i+1][j]=='o'&&arr[i+2][j]=='.');
            }
            if(j-2>=0){
                t+=(int)(arr[i][j-1]=='o'&&arr[i][j-2]=='.');
            }
            if(j+2<7){
                t+=(int)(arr[i][j+1]=='o'&&arr[i][j+2]=='.');                
            }            
        }
    }    
    cout<<t<<endl;
}