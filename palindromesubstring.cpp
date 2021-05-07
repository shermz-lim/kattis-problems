#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

string line;
int n;
vector<vector<int>> mem;

bool is_palin(int i, int j) {
    if (i >= j) {
        return true;
    } else if (mem[i][j] != -1) {
        return mem[i][j];
    } else {
        mem[i][j] = (line[i] == line[j]) && is_palin(i + 1, j - 1);
        return mem[i][j];
    }
}

void solve() {
    n = line.size();
    set<string> results;
    mem.assign(n, vector<int>(n, -1));
    for (int i = 0; i < (n - 1); i++) {
        for (int j = i + 1; j < n; j++) {
            if (is_palin(i, j) > 0) {
                results.insert(line.substr(i, j - i + 1));
            }
        }
    }
    for (string res: results) {
        cout << res << "\n";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    while (getline(cin, line)) {
        solve();
    }
}