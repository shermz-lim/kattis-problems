#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

vector<bool> is_prime;

void sieve(int n) {
    is_prime[0] = false;
    is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            for (int j = 2 * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n, q;    
    cin >> n >> q;
    
    is_prime.assign(n + 1, true);
    sieve(n);

    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (is_prime[i]) {
            count++;
        }
    }

    cout << count << "\n";

    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        cout << is_prime[x] << "\n";
    }
}