#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int n;
    cin >> n;
    map<int, priority_queue<int>> quests;
    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;
        if (command == "add") {
            int E, G;
            cin >> E >> G;
            quests[E].push(G);
        } else if (command == "query") {
            int X;
            cin >> X;
            ll gold = 0;
            while (X > 0) {
                map<int, priority_queue<int>>::iterator it = quests.upper_bound(X);
                if (it == quests.begin()) {
                    break;
                } else {
                    it = prev(it);
                    gold += it->second.top();
                    X -= it->first;
                    it->second.pop();
                    if (it->second.empty()) {
                        quests.erase(it);
                    }
                }
            }
            cout << gold << "\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}