#include <iostream>

using namespace std;

int main()
{
    int n;
    double q, y, sum;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> q >> y;
        sum += (q * y);
    }
    cout << sum << endl;
}
