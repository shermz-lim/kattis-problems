#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 400000;

int T[MAX_N], P[MAX_N], b[MAX_N];                // T = text, P = pattern
int n, m;                                        // n = |T|, m = |P|


void kmpPreprocess() {                           // call this first
  int i = 0, j = -1; b[0] = -1;                  // starting values
  while (i < m) {                                // pre-process P
    while ((j >= 0) && (P[i] != P[j])) j = b[j]; // different, reset j
    ++i; ++j;                                    // same, advance both
    b[i] = j;
  }
}

int kmpSearch() {                               // similar as above
  int freq = 0;
  int i = 0, j = 0;                              // starting values
  while (i < n) {                                // search through T
    while ((j >= 0) && (T[i] != P[j])) j = b[j]; // if different, reset j
    ++i; ++j;                                    // if same, advance both
    if (j == m) {                                // a match is found
      ++freq;
      // printf("P is found at index %d in T\n", i-j);
      j = b[j];                                  // prepare j for the next
    }
  }
  return freq;
}

int max_a = 360000;

int diff(int x, int y) {
    return (x + max_a - y) % max_a;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int h;
    cin >> h;
    n = h * 2;
    m = h;
    vector<int> arr1(h), arr2(h);
    for (int &v : arr1) {
        cin >> v;
    }
    for (int &v : arr2) {
        cin >> v;
    }
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    for (int i = 0; i < h; i++) {
        T[i] = diff(arr1[i], arr1[(i + 1) % h]);
        T[i + h] = T[i];
    }
    for (int i = 0; i < h; i++) {
        P[i] = diff(arr2[i], arr2[(i + 1) % h]);
    }
    kmpPreprocess();
    cout << (kmpSearch() > 0 ? "possible" : "impossible") << "\n";
}