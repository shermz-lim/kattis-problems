#include <iostream>

using namespace std;

int main()
{
    int x, y, n;
    cin >> x >> y >> n;
    for (int i = 1; i <= n; i++) {
        if (i % x == 0) {
            cout << "Fizz";
        }
        if (i % y == 0) {
            cout << "Buzz";
        }
        if (i % x != 0 && i % y != 0) {
            cout << i;
        }
        cout << endl;
    }
}
