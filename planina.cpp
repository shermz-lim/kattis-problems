#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int prevSide = 1;
    int total = 4;
    for (int i = 0; i < n; i++) {
        int overlap = (prevSide - 1) * prevSide * 2;
        total += (prevSide * prevSide * 5 - overlap);
        prevSide *= 2;
    }
    cout << total << endl;
}