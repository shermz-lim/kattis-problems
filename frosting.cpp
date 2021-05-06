#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    
    int n;
    cin >> n;
    
    vector<ll> A(3, 0), B(3, 0);
    for (int i = 0; i < n; i++) {
        ll ai; cin >> ai;
        A[(i + 1) % 3] += ai;
    }
    for (int i = 0; i < n; i++) {
        ll bi; cin >> bi;
        B[(i + 1) % 3] += bi;
    }

    cout << (A[0] * B[0] + A[1] * B[2] + A[2] * B[1]) << " ";
    cout << (A[0] * B[1] + A[1] * B[0] + A[2] * B[2]) << " ";
    cout << (A[0] * B[2] + A[2] * B[0] + A[1] * B[1]) << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}