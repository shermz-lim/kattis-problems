#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    int n, x;
    cin >> n;
    int tot = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        tot += pow(x/10, x%10);
    }
    cout << tot << endl;
}
