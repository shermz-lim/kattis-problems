#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

vector<string> area_map{"", "single", "double", "triple"};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    for (int a = 0; a <= 20; a++) {
        for (int b = 0; b <= 20; b++) {
            for (int c = 0; c <= 20; c++) {
                for (int aa = 1; aa <= 3; aa++) {
                    for (int ba = 1; ba <= 3; ba++) {
                        for (int ca = 1; ca <= 3; ca++) {
                            if ((a * aa + b * ba + c * ca) == n) {
                                if (a > 0) {
                                    cout << area_map[aa] << " " << a << "\n";
                                }
                                if (b > 0) {
                                    cout << area_map[ba] << " " << b << "\n";
                                }
                                if (c > 0) {
                                    cout << area_map[ca] << " " << c << "\n";
                                }
                                return 0;
                            }
                        }                        
                    }                    
                }
            }
        }
    }
    cout << "impossible\n";
}