#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    char command;
    string text;
    cin>>command>>text;
    if (command=='E'){
        int i=0;
        while (i<text.size()){
            char c=text[i];
            int j=i+1;
            while (j<text.size() && text[j]==c){
                j+=1;
            }
            cout<<c<<(j-i);
            i=j;
        }
        cout<<endl;
    }else{
        for (int i=0;i<text.size()-1;i+=2){
            char c=text[i];
            int r=text[i+1]-'0';
            for (int j=0;j<r;j++){
                cout<<c;
            }
        }
        cout<<endl;
    }
}