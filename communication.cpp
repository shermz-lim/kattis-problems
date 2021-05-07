#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        for (int x = 0; x <= 255; x++) {
            if ((x ^ ((x << 1) & 255)) == a) {
                if (i > 0) {
                    cout << " ";
                }
                cout << x;
                break;
            }
        }
    }
    cout << "\n";
}