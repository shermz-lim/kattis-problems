#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n, w, h, p;
    cin>>n>>w>>h;
    int limit = sqrt(pow(w, 2) + pow(h, 2));
    for (int i = 0; i < n; i++) {
        cin >> p;
        if (p > limit) {
            cout << "NE";
        } else {
            cout << "DA";
        }
        cout << endl;
    }
}