#include <iostream>

using namespace std;

int main()
{
    int x, n, p;
    cin >> x >> n;
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> p;
        total += (x - p);
    }
    cout << (total + x) << endl;
}
