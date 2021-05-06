#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    double x;
    int low, high;
    cin >> x >> low >> high;
    int k = -1, mini = -1, maxi = -1;
    while (1) {
        if (k > 0 && abs(x - 100) < 1e-5) {
            break;
        }
        k++;
        if ((ceil(x) >= low && ceil(x) <= high) || x >= 100) {
            if (mini < 0) {
                mini = k;
            }
            maxi = k;
        }
        x = 10 * sqrt(x);
    }
    if (mini < 0 && maxi < 0) {
        cout << "impossible\n";
    } else if (maxi == k) {
        cout << mini << " inf\n";
    } else {
        cout << mini << " " << maxi << "\n";
    }
}
