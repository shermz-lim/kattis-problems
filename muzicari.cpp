#include <bits/stdc++.h>

using namespace std;

int t, n;    
int sum = 0;
int mem[500][5001];
vector<int> arr;

bool dp(int i, int curr) {
    if (curr <= t && curr >= ((sum + 1) / 2)) {
        return 1;
    } else if (i >= n) {
        return 0;
    } else if (curr > t) {
        return 0;
    } else {
        int &ans = mem[i][curr];    
        if (ans != -1) return ans;
        if (dp(i + 1, curr + arr[i])) {
            ans = 2;
        } else if (dp(i + 1, curr)) {
            ans = 1;
        } else {
            ans = 0;
        }
        return ans;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> t >> n;
    memset(mem, -1, sizeof(mem));
    arr.assign(n, 0);
    for (int &v : arr) {
        cin >> v;
        sum += v;
    }

    dp(0, 0);

    int curr1 = 0, curr2 = 0;
    for (int i = 0; i < n; i++) {
        if (i > 0) cout << " ";
        if (mem[i][curr1] == 2) {
            cout << curr1;
            curr1 += arr[i];
        } else {
            cout << curr2;
            curr2 += arr[i];
        }
    }
    cout << endl;
}

