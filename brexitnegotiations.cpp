#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> in(n, 0);
    vector<ll> weights(n);
    vector<vector<int> > adj_list(n, vector<int>());
    for (int i = 0; i < n; i++) {
        int ei, di;
        cin >> ei >> di;
        weights[i] = ei;
        while (di--) {
            int bi; cin >> bi;
            bi--;
            adj_list[i].push_back(bi);
            in[bi]++;
        }
    }
    priority_queue<pair<ll, ll>, vector<pair<ll, ll> >, greater<pair<ll, ll> > > pq;
    for (int i = 0; i < n; i++) {
        if (in[i] == 0) {
            pq.push(make_pair(weights[i], i));
        }
    }

    ll longest = INT_MIN;
    ll seen = (n - 1);

    while (!pq.empty()) {
        pair<ll, ll> u = pq.top();
        pq.pop();
        if ((u.first + seen) > longest) {
            longest = u.first + seen;
        }
        seen--;
        for (int v : adj_list[u.second]) {
            in[v]--;
            if (in[v] == 0) {
                pq.push(make_pair(weights[v], v));
            }
        }
    }

    cout << (longest) << endl;
}

