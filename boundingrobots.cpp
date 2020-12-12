#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int w,l;
    while (cin>>w>>l){
        if (w==0&&l==0) break;
        int n;
        cin>>n;
        int x=0,y=0,actX=0,actY=0;
        for (int i=0;i<n;i++){
            char d; int dist;
            cin>>d>>dist;
            if(d=='u'){
                x += dist;
                actX = min(l - 1, actX + dist);
            }else if(d=='d'){
                x -= dist;
                actX = max(0, actX - dist);
            }else if(d=='r'){
                y += dist;
                actY = min(w - 1, actY + dist);
            }else{
                y -= dist;
                actY = max(0, actY - dist);
            }
        }
        cout<<"Robot thinks "<<y<<" "<<x<<endl;
        cout<<"Actually at "<<actY<<" "<<actX<<endl;
        cout<<endl;
    }
}