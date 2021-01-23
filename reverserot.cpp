#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string alphabets="ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
    int n; string text;
    while(1){
        cin>>n;
        if(n==0) break;
        cin>>text;
        reverse(text.begin(),text.end());
        for (int i=0;i<text.size();i++){
            cout<<alphabets[(alphabets.find(text[i])+n)%alphabets.size()];
        }
        cout<<endl;
    }
}