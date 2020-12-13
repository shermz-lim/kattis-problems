#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    string text;
    cin>>n;
    getline(cin, text);
    for (int i=1;i<=n;i++){
        cout<<"Case #"<<i<<": ";
        getline(cin, text);
        int prevButton=-1;
        for (int j=0;j<text.size();j++){
            char c=text[j];
            int button;
            int repeat;
            if(c==' '){
                button=0; repeat=1;
            }else if(c-'a'<=14){
                button=(c-'a')/3+2;
                repeat=(c-'a')%3+1;
            }else if(c-'a'<=18){
                button=7;
                repeat=(c-'p')+1;
            }else if(c-'a'<=21){
                button=8;
                repeat=(c-'t')+1;
            }else{
                button=9;
                repeat=(c-'w')+1;
            }
            if (button==prevButton) cout<<" ";
            for (int k=0;k<repeat;k++) {
                cout<<button;
            }
            prevButton=button;
        }
        cout<<endl;
    }
}