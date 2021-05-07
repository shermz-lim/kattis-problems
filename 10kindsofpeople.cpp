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
    grid.assign(r, vector<char>(c, '0'));
    cc.assign(r, vector<int>(c, -1));
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            char x; cin >> x;
            grid[i][j] = x;
        }
    }    
    int curr_id = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (cc[i][j] == -1) {
                dfs(i, j, curr_id);
                curr_id++;
            }
        }
    }
    int n;
    cin >> n;
    while (n--) {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        r1--; c1--; r2--; c2--;
        if ((grid[r1][c1] != grid[r2][c2]) || (cc[r1][c1] != cc[r2][c2])) {
            cout << "neither\n";
        } else if (grid[r1][c1] == '1') {
            cout << "decimal\n";
        } else {
            cout << "binary\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}