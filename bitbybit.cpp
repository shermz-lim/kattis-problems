#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

int n;

void solve() {
    string bits;
    for (int i = 0; i < 32; i++) {
        bits.push_back('?');
    }
    for (int i = 0; i < n; i++) {
        string command;
        int x, y;
        cin >> command;
        if (command == "CLEAR") {
            cin >> x;
            bits[x] = '0';
        } else if (command == "SET") {
            cin >> x;
            bits[x] = '1';
        } else if (command == "AND") {
            cin >> x >> y;
            bits[x] = (bits[x] == '0' || bits[y] == '0')
                ? '0'
                : (bits[x] == '?' || bits[y] == '?')
                    ? '?'
                    : '1';
        } else {
            cin >> x >> y;
            bits[x] = (bits[x] == '1' || bits[y] == '1')
                ? '1'
                : (bits[x] == '?' || bits[y] == '?')
                    ? '?'
                    : '0';
        }
    }
    for (int i = 0; i < 32; i++) {
        cout << bits[31 - i];
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    while (cin >> n, n) {
        solve();
    }
}