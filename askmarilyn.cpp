#include <bits/stdc++.h>

using namespace std;

char ops[] = {'A', 'B', 'C'};

void solve() {
    int c1 = rand() % 3;
    cout << ops[c1] << endl;
    char d; bool dr;
    cin >> d >> dr;
    if (dr) {
        cout << d << endl;
    } else {
        for (int i = 0; i < 3; i++) {
            if (i != c1 && ops[i] != d) {
                cout << ops[i] << endl;
                break;
            }
        }
    }
    cin >> dr >> d;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 1000; i++) {
        solve();
    }
}
