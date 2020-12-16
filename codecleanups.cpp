#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n;
    cin>>n;
    bool dirtyP[366];
    for(int i=0;i<366;i++) dirtyP[i]=false;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        dirtyP[x]=true;
    }
    int cleanups=0;
    int currDirtyP=0;
    int currDirt=0;
    for(int i=1;i<366;i++){
        currDirt+=currDirtyP;
        if(currDirt>=20){
            currDirt=0;
            currDirtyP=0;
            cleanups++;
        }
        if(dirtyP[i]){
            currDirtyP++;
        }
    }
    if(currDirtyP>0){
        cleanups++;
    }
    cout<<cleanups<<endl;
}