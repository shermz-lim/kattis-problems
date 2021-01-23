#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int x;
    cin>>x;
    while(x/10 != 0){
        int temp=1;
        while (x>0){
            int d=x%10;
            x=x/10;
            if(d!=0){
                temp*=d;
            }
        }
        x=temp;
    }
    cout<<x<<endl;
}