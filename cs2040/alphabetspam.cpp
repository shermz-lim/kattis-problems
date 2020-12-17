#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

void solve() {
    string line;
    getline(cin,line);
    double ws=0,lower=0,upper=0,sym=0;
    for(int i=0;i<line.size();i++){
        char c=line[i];
        if(c>='a'&&c<='z'){
            lower++;
        }else if(c>='A'&&c<='Z'){
            upper++;
        }else if(c=='_'){
            ws++;
        }else{
            sym++;
        }
    }
    double tot=lower+upper+ws+sym;
    cout<<fixed; cout.precision(10);
    cout<<ws/tot<<endl;
    cout<<lower/tot<<endl;
    cout<<upper/tot<<endl;
    cout<<sym/tot<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}