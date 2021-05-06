#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &v : arr) {
        cin >> v;
    }
    sort(arr.begin(), arr.end());

    int charges = 0;
    for (int i = (n - 1); i >= 0; i--) {
        int height = i == 0 ? arr[i] : (arr[i] - arr[i - 1]);
        charges = min(height + charges, n - i);
    }
    cout << charges << endl;
}
