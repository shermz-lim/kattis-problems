#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int x, y, z, w;
    z=0;w=0;
    for(int i=0;i<3;i++){
        cin >> x >> y;
        z^=x;
        w^=y;
    }
    cout << z << " " << w << endl;
}
