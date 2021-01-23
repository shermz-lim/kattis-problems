#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int t = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x < 0) {
            t += 1;
        }
    }
    cout << t << endl;
}
