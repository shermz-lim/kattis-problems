#include <iostream>

using namespace std;

int main()
{
    int n, r, e, c;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> r >> e >> c;
        int p = e - c;
        if (r > p) {
            cout << "do not advertise";
        } else if (r < p) {
            cout << "advertise";
        } else {
            cout << "does not matter";
        }
        cout << endl;
    }
}
