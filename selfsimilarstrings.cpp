#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

string line;

void solve() {
    int max_d = 0;
    for (int d = 1; d < line.size(); d++) {
        unordered_map<string, int> freq;
        for (int i = 0; i < (line.size() - d + 1); i++) {
            freq[line.substr(i, d)]++;
        }
        bool ss = true;
        for (auto it : freq) {
            if (it.second == 1) {
                ss = false; break;
            }
        }
        if (ss) {
            max_d = max(max_d, d);
        }
    }
    cout << max_d << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    while (getline(cin, line)) {
        solve();
    }
}