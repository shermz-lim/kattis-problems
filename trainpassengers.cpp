#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int c,n;
    cin>>c>>n;
    bool fake=false;
    int numTrain=0;
    for(int i=0;i<n;i++){
        int l,e,s;
        cin>>l>>e>>s;
        fake=fake||(l>numTrain);
        numTrain+=(e-l);
        fake=fake||(numTrain<0);
        fake=fake||(numTrain>c);
        fake=fake||((c-numTrain)>0&&s>0);
        if(i==n-1){
            fake=fake||(s>0)||(numTrain>0);
        }
    }
    cout<<(fake?"impossible":"possible")<<endl;
}