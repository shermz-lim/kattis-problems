#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int c = 0;
    double t = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x >= 0) {
            t += x;
            c += 1;
        }
    }
    cout << (t / c) << endl;
}
