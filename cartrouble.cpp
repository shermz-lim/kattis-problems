#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

int n;
unordered_map<int, vector<int> > adj_list;
unordered_set<int> visited;
vector<int> order;

void dfs(int u) {
    for (int v : adj_list[u]) {
        if (visited.count(v) == 0) {
            visited.insert(v);
            dfs(v);
        }
    }
}

vector<int> not_visited() {
    vector<int> nv;
    for (int i : order) {
        if (visited.count(i) == 0) {
            nv.push_back(i);
        }
    }
    return nv;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    unordered_map<int, vector<int> > new_adj_list;
    for (int i = 0; i < n; i++) {
        int u, k;
        cin >> u >> k;
        order.push_back(u);
        while (k--) {
            int v; cin >> v;
            adj_list[u].push_back(v);
            new_adj_list[v].push_back(u);
        }
    }
    visited.clear();
    visited.insert(0);
    dfs(0);
    vector<int> unreachable = not_visited();
    adj_list = new_adj_list;
    visited.clear();
    visited.insert(0);
    dfs(0);
    vector<int> trapped = not_visited(); 
    if (trapped.size() == 0 && unreachable.size() == 0) {
        cout << "NO PROBLEMS" << endl;
    } else {
        for (int u : trapped) {
            cout << "TRAPPED " << u << "\n";
        }
        for (int u : unreachable) {
            cout << "UNREACHABLE " << u << "\n";
        }
    }
}

