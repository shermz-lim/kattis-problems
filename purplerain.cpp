#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    string line;
    getline(cin, line);
    int l = 0, l_idx = -1, s = 0, s_idx = -1, b = 0, r = 0;
    for (int i = 0; i < line.size(); i++) {
        if (line[i] == 'B') {
            b++;
        } else {
            r++;
        }
        int diff = r - b;
        if (diff < s) {
            s = diff; s_idx = i;
        } else if (diff > l) {
            l = diff; l_idx = i;
        }
    }
    if (s_idx < l_idx) {
        cout << (s_idx + 2) << " " << (l_idx + 1) << "\n";
    } else {
        cout << (l_idx + 2) << " " << (s_idx + 1) << "\n";
    }
}
