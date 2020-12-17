#include <iostream>

using namespace std;

int flip(int x)
{
    int res = 0;
    while (x != 0) {
        res *= 10;
        res += (x % 10);
        x /= 10;
    }
    return res;
}

int main()
{
    int x, y;
    cin >> x >> y;
    x = flip(x); y = flip(y);
    cout << (x > y ? x : y) << endl;
}
