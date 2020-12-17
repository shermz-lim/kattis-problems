#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int n, p;
    cin >> n >> p;
    for (int i = 0; i <= n; i++) {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << p << endl;
}
