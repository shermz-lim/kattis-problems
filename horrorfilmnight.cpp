#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

void solve() {
    int k1, k2;
    cin >> k1;
    vector<int> arr1;
    for (int i = 0; i < k1; i++) {
        int x; cin >> x;
        arr1.push_back(x);
    }
    cin >> k2;
    vector<int> arr2;
    for (int i = 0; i < k2; i++) {
        int x; cin >> x;
        arr2.push_back(x);
    }
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    int i = 0, j = 0;
    int prev_dislike = 0;
    int count = 0;
    while (i < arr1.size() || j < arr2.size()) {
        bool e;
        if (i == arr1.size()) {
            e = false;
        } else if (j == arr2.size()) {
            e = true;
        } else if (arr1[i] == arr2[j]) {
            prev_dislike = 0;
            count++;
            i++; j++;
            continue;
        } else if (arr1[i] < arr2[j]) {
            e = true;
        } else {
            e = false;
        }        
        if (e) {
            i++;
            if (prev_dislike == 2) {
                continue;
            }
            prev_dislike = 2;            
        } else {
            j++;
            if (prev_dislike == 1) {
                continue;
            }
            prev_dislike = 1;            
        }
        count++;
    }
    cout << count << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}