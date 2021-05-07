#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

vector<string> arr;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int r;
    cin >> r;
    for (int i = 0; i < r; i++) {
        string routine;
        cin >> routine;
        arr.push_back(routine);
    }
    sort(arr.begin(), arr.end());
    int min_quick = INT_MAX;
    do {
        int num_quick = 0;
        for (int i = 0; i < (r - 1); i++) {
            for (char c1 : arr[i]) {
                for (char c2 : arr[i + 1]) {
                    if (c1 == c2) {
                        num_quick++;
                        break;
                    }
                }
            }
            if (num_quick >= min_quick) {
                break;
            }
        }
        min_quick = min(min_quick, num_quick);
    } while (next_permutation(arr.begin(), arr.end()));
    cout << min_quick << endl;
}