#include <iostream>
#include <string>

using namespace std;

int main()
{
    int l, x, d, tot;
    cin >> l >> x;
    tot = 0; d = 0;
    string v; int p;
    for (int i = 0; i < x; i++) {
        cin >> v >> p;
        if (v == "leave") {
            tot -= p;
        } else {
            if (tot + p > l) {
                d += 1;
            } else {
                tot += p;
            }
        }
    }
    cout << d << endl;
}
