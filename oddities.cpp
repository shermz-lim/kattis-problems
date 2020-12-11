#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        cout << x << (x % 2 == 0 ? " is even" : " is odd") << endl;
    }
}
