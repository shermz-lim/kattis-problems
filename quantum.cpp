#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>

using namespace std;

typedef long long ll;

int l, nop, nw;
vector<pair<string, ll> > ops;

int bitstr_to_int(string lin) {
    int res = 0;
    for (int i = 0; i < lin.size(); i++) {
        res = res << 1;
        res |= (lin[i] == '1');
    }
    return res;
}

int operate(string op, int curr) {
    for (int i = 0; i < l; i++) {
        int op_idx = l - i - 1;
        if (op[op_idx] == 'F') {
            curr ^= (1 << i);
        } else if (op[op_idx] == 'S') {
            curr |= (1 << i);
        } else if (op[op_idx] == 'C') {
            curr &= ~(1 << i);
        }
    }
    return curr;
}

void dijkstra() {
    string src_lin, tgt_lin;
    cin >> src_lin >> tgt_lin;
    int s = bitstr_to_int(src_lin);
    int t = bitstr_to_int(tgt_lin);

    unordered_set<int> ss;
    unordered_map<int, ll> dists;
    priority_queue<pair<ll, int> > pq;
    
    pq.push(make_pair(0, s));
    dists[s] = 0;
    
    while (!pq.empty()) {
        pair<ll, int> top = pq.top();
        int u = top.second, d = -top.first;
        pq.pop();
        if (u == t) {
            cout << d;
            return;
        }
        if (ss.count(u) != 0) {
            continue;
        } else {
            ss.insert(u);
        }
        for (auto &[op, c] : ops) {
            int v = operate(op, u);            
            if (ss.count(v) != 0) {
                continue;
            }
            if (dists.count(v) == 0 || ((d + c) < dists[v])) {
                dists[v] = d + c;  
                pq.push(make_pair(-dists[v], v));
            }
        }
    }
    cout << "NP";
}

void solve() {
    cin >> l >> nop >> nw;
    ops.clear();
    for (int i = 0; i < nop; i++) {
        string op;
        ll c;
        cin >> op >> c;
        ops.push_back(make_pair(op, c));
    }
    for (int i = 0; i < nw; i++) {
        if (i > 0) cout << " ";
        dijkstra();
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}

