#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int s,a,b,c;
    while(1){
        cin>>s>>a>>b>>c;
        if(s==0&&a==0&&b==0&&c==0) break;
        int tot=40*2;
        tot+=((s-a+40)%40);
        tot+=40;
        tot+=((b-a+40)%40);
        tot+=((b-c+40)%40);
        cout<<tot*9<<endl;
    }
}