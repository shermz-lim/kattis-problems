#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

string s, s1, s2;
int n, m;

vector<vector<int> > mem;

bool is_possible(int i, int j) {
    if (i == n && j == m) {
        return true;
    } else if (mem[i][j] != -1) {
        return mem[i][j];
    } 

    int& ans = mem[i][j];

    if (i == n || (s1[i] != s[i + j])) {
        ans = (s2[j] == s[i + j]) && is_possible(i, j + 1);
    } else if (j == m || (s2[j] != s[i + j])) {
        ans = (s1[i] == s[i + j]) && is_possible(i + 1, j);
    } else {
        ans = is_possible(i + 1, j) || is_possible(i, j + 1);    
    }
    return ans;
}

void solve() {
    cin >> s >> s1 >> s2;

    n = s1.size(), m = s2.size();
    mem.assign(n + 1, vector<int>(m + 1, -1));

    cout << (is_possible(0, 0) ? "yes" : "no") << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    solve();
}
