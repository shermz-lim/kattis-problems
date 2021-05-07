#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

int r, c;
vector<vector<char>> grid;
vector<vector<int>> cc;

vector<pair<int,int>> dirs = {
    {-1, 0}, {1, 0},
    {0, -1}, {0, 1}
};

void dfs(int x, int y, int id) {
    cc[x][y] = id;
    for (pair<int,int> &dir : dirs) {
        int x2 = x + dir.first;
        int y2 = y + dir.second;
        if (x2 < 0 || x2 >= r || y2 < 0 || y2 >= c) {
            continue;
        }
        if (cc[x2][y2] == -1 && grid[x][y] == grid[x2][y2]) {
            dfs(x2, y2, id);
        }
    }
}

void solve() {
    cin >> r >> c;
    r += 2; c += 2;
    grid.assign(r, vector<char>(c, '0'));
    cc.assign(r, vector<int>(c, -1));
    for (int i = 1; i < (r - 1); i++) {
        for (int j = 1; j < (c - 1); j++) {
            char x; cin >> x;
            grid[i][j] = x;
        }
    }
    int curr_id = 0;
    dfs(0, 0, curr_id);
    int count = 0;
    for (int i = 1; i < (r - 1); i++) {
        for (int j = 1; j < (c - 1); j++) {
            if (grid[i][j] == '1') {
                for (pair<int,int> &dir : dirs) {
                    int x2 = i + dir.first;
                    int y2 = j + dir.second;
                    if (cc[x2][y2] == 0) count++;
                }                
            }
        }
    }
    cout << count << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}