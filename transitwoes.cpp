#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int s, t, n;
    cin >> s >> t >> n;
    int ds[n + 1], bs[n], cs[n];
    for (int i = 0; i < n + 1; i++) {
        cin >> ds[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> bs[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> cs[i];
    }
    int i = 0;
    for (int j = 0; j < n; j++) {
        i += ds[j];
        i = ceil((double) i / cs[j]) * cs[j];
        i += bs[j];
    }
    i += ds[n];
    cout << (i > t ? "no" : "yes") << endl;
}
