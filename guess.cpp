#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int low = 1, high = 1000;
    while (low != high) {
        int mid = low + (high - low) / 2;
        cout << mid << endl;
        string res;
        cin >> res;
        if (res == "lower") {
            high = mid;
        } else if (res == "higher") {
            low = mid + 1;
        } else {
            return 0;
        }
    }
    cout << low << endl;
}