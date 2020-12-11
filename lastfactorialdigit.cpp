#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        int res = 1;
        for (int j = 1; j <= n; j++) {
            res *= j;
        }
        cout << (res % 10) << endl;
    }
}