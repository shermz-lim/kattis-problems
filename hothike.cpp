#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    cin>>n;
    int prev,x,next;
    cin>>prev>>x;
    int minimax=41, idx=-1;
    for (int i=1;i<n-1;i++){
        cin>>next;
        int maxTemp=max(next, prev);
        if (maxTemp < minimax){
            minimax=maxTemp;
            idx=i;
        }
        prev=x;
        x=next;
    }
    cout<<idx<<" "<<minimax<<endl;
}