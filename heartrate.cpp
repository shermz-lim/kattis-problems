#include <iostream>

using namespace std;

int main()
{
    int n, b;
    double p;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> b >> p;
        cout << (60.0 / p * (b - 1)) << " " << (60.0 / p * b) << " " << (60.0 / p * (b + 1)) << endl;
    }
}
