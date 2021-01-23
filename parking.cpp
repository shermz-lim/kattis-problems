#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int a,b,c,as,ae,bs,be,cs,ce;
    cin>>a>>b>>c>>as>>ae>>bs>>be>>cs>>ce;
    int tot=0;
    for (int i=min(as, min(bs, cs)); i<max(ae, max(be, ce)); i++){
        int trucks=0;
        if (i>=as&&i<ae) trucks++;
        if (i>=bs&&i<be) trucks++;
        if (i>=cs&&i<ce) trucks++;
        if (trucks==3) tot += c*3;
        if (trucks==2) tot += b*2;
        if (trucks==1) tot += a;
    }
    cout<<tot<<endl;
}