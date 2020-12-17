#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        int tot, o;
        tot = 0;
        for (int j = 0; j < k; j++) {
            cin >> o;
            tot += (o - 1);
        }
        tot += 1;
        cout << tot << endl;
    }
}