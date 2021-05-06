#include <bits/stdc++.h>

#define MAX_N 1000000
typedef long long ll;

using namespace std;

ll mem[MAX_N]; 
int trips[MAX_N];
int s, p, m, n;

ll dp(int i) {
    if (i == n) return 0;
    ll &ans = mem[i];
    if (ans != -1) return ans;
    ll single = s + dp(i + 1);
    int j = i;
    while (j < n && (trips[j] < (trips[i] + m))) {
        j++;
    }
    ll period = p + dp(j);
    ans = min(single, period);
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> s >> p >> m >> n;
    for (int i = 0; i < n; i++) {
        cin >> trips[i];
    }
    memset(mem, -1, sizeof(mem));
    cout << dp(0) << endl;
}
