#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string text;
    getline(cin, text);
    int n=text.size();
    int r=5,c=5+(n-1)*4;
    char arr[r][c];
    for (int i=0;i<r;i++){for(int j=0;j<c;j++)arr[i][j]='.';};
    int j=1;
    for(int i=2;i<c;i+=4) {
        arr[0][i]=j%3==0?'*':'#';
        arr[4][i]=j%3==0?'*':'#';
        arr[2][i]=text[j-1];
        arr[2][i-2]='#';
        arr[2][i+2]='#';
        j++;
    }
    j=1;
    for(int i=1;i<c;i+=4) {
        arr[1][i]=j%3==0?'*':'#';
        arr[1][i+2]=j%3==0?'*':'#';
        arr[3][i]=j%3==0?'*':'#';
        arr[3][i+2]=j%3==0?'*':'#';
        j++;
    }
    j=1;
    for(int i=2;i<c;i+=4) {
        if(j%3==0){
            arr[2][i-2]='*'; arr[2][i+2]='*';
        }
        j++;
    }
    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}