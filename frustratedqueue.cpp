#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int n;
string line;
ll mem[1000][501];

ll dp(int i, int j) {
    int coins = 2 * j - i;
    if (i >= n && j == (n / 2) && coins == 0) {
        return 1;
    } else if ((i >= n) || (j > n / 2) || (coins < 0)) {
        return 0;
    } else {
        ll &ans = mem[i][j];
        if (ans != -1) return ans;
        if (line[i] == ')') {
            ans = dp(i + 1, j);
        } else if (line[i] == '(') {
            ans = dp(i + 1, j + 1);
        } else {
            ans = dp(i + 1, j + 1) +
                dp (i + 1, j);
        }
        return ans % 1000000;
    }
}

void solve() {
    n = line.size(); 
    memset(mem, -1, sizeof(mem));
    cout << (dp(0, 0) % 1000000) << "\n"; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    while(getline(cin, line)) {
        solve();
    }
}
