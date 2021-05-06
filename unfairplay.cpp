// Disclaimer: This code is a hybrid between old CP1-2-3 implementation of
// Edmonds Karp's algorithm -- re-written in OOP fashion and the fast
// Dinic's algorithm implementation by
// https://github.com/jaehyunp/stanfordacm/blob/master/code/Dinic.cc
// This code is written in modern C++17 standard

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef tuple<int, ll, ll> edge;
typedef vector<int> vi;
typedef pair<int, int> ii;

const ll INF = 1e18;                             // large enough

class max_flow {
    private:
        int V;
        vector<edge> EL;
        vector<vi> AL;
        vi d, last;
        vector<ii> p;
        unordered_map<ll, int> AL_EL_map;

        bool BFS(int s, int t) {                       // find augmenting path
            d.assign(V, -1); d[s] = 0;
            queue<int> q({s});
            p.assign(V, {-1, -1});                       // record BFS sp tree
            while (!q.empty()) {
                int u = q.front(); q.pop();
                if (u == t) break;                         // stop as sink t reached
                for (auto &idx : AL[u]) {                  // explore neighbors of u
                    auto &[v, cap, flow] = EL[idx];          // stored in EL[idx]
                    if ((cap-flow > 0) && (d[v] == -1))      // positive residual edge
                        d[v] = d[u]+1, q.push(v), p[v] = {u, idx}; // 3 lines in one!
                }
            }
            return d[t] != -1;                           // has an augmenting path
        }

        ll send_one_flow(int s, int t, ll f = INF) {   // send one flow from s->t
            if (s == t) return f;                        // bottleneck edge f found
            auto &[u, idx] = p[t];
            auto &cap = get<1>(EL[idx]), &flow = get<2>(EL[idx]);
            ll pushed = send_one_flow(s, u, min(f, cap-flow));
            flow += pushed;
            auto &rflow = get<2>(EL[idx^1]);             // back edge
            rflow -= pushed;                             // back flow
            return pushed;
        }

        ll DFS(int u, int t, ll f = INF) {             // traverse from s->t
            if ((u == t) || (f == 0)) return f;
            for (int &i = last[u]; i < (int)AL[u].size(); ++i) { // from last edge
                auto &[v, cap, flow] = EL[AL[u][i]];
                if (d[v] != d[u]+1) continue;              // not part of layer graph
                if (ll pushed = DFS(v, t, min(f, cap-flow))) {
                    flow += pushed;
                    auto &rflow = get<2>(EL[AL[u][i]^1]);     // back edge
                    rflow -= pushed;
                    return pushed;
                }
            }
            return 0;
        }

    public:
        max_flow(int initialV) : V(initialV) {
            EL.clear();
            AL.assign(V, vi());
        }

        // if you are adding a bidirectional edge u<->v with weight w into your
        // flow graph, set directed = false (default value is directed = true)
        void add_edge(int u, int v, ll w, bool directed = true) {
            if (u == v) return;                          // safeguard: no self loop
            EL.emplace_back(v, w, 0);                    // u->v, cap w, flow 0
            AL[u].push_back(EL.size()-1);                // remember this index
            AL_EL_map[u*V + v] = EL.size() - 1;
            EL.emplace_back(u, directed ? 0 : w, 0);     // back edge
            AL[v].push_back(EL.size()-1);                // remember this index
            AL_EL_map[v*V + u] = EL.size() - 1;
        }

        ll get_edge_flow(int u, int v) {
            return get<2>(EL[AL_EL_map[u*V + v]]);
        }

        ll edmonds_karp(int s, int t) {
            ll mf = 0;                                   // mf stands for max_flow
            while (BFS(s, t)) {                          // an O(V*E^2) algorithm
                ll f = send_one_flow(s, t);                // find and send 1 flow f
                if (f == 0) break;                         // if f == 0, stop
                mf += f;                                   // if f > 0, add to mf
            }
            return mf;
        }

        ll dinic(int s, int t) {
            ll mf = 0;                                   // mf stands for max_flow
            while (BFS(s, t)) {                          // an O(V^2*E) algorithm
                last.assign(V, 0);                         // important speedup
                while (ll f = DFS(s, t))                   // exhaust blocking flow
                    mf += f;
            }
            return mf;
        }
};

int n, m;

int get_match_idx(int i) {
    return n + i;
}

bool is_my_team(int u) {
    return u == (n - 1);
}

int source() {
    return n + m;
}

int dest() {
    return n + m + 1;
}

void solve() {
    vector<int> points(n);
    for (int &v : points) {
        cin >> v;
    }
    max_flow mf(n + m + 2);
    vector<pair<int, int> > matches;
    int my_points = points[n - 1], m_prime = 0;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        matches.push_back(make_pair(a, b));
        if (is_my_team(a) || is_my_team(b)) {
            my_points += 2; 
        } else {
            int match_idx = get_match_idx(i);
            mf.add_edge(source(), match_idx, 2); 
            mf.add_edge(match_idx, a, 2);
            mf.add_edge(match_idx, b, 2);
            m_prime++;
        }
    }
    for (int i = 0; i < (n - 1); i++) {
        if ((my_points - points[i] - 1) < 0) {
            cout << "NO\n";
            return;
        }
        mf.add_edge(i, dest(), my_points - points[i] - 1);
    }
    ll max_f = mf.dinic(source(), dest());
    if (max_f == (2 * m_prime)) {
        for (int i = 0; i < m; i++) {
            if (i > 0) cout << " ";
            auto &[u, v] = matches[i];
            if (is_my_team(u)) {
                cout << 0;
            } else if (is_my_team(v)) {
                cout << 2;
            } else {
                int match_idx = get_match_idx(i);    
                if (mf.get_edge_flow(match_idx, u) == 2) {
                    cout << 0;
                } else if (mf.get_edge_flow(match_idx, v) == 2) {
                    cout << 2;
                } else {
                    cout << 1;
                }
            }
        }
        cout << endl;
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    while (cin >> n, n != -1) {
        cin >> m;
        solve();
    }

    return 0;
}
