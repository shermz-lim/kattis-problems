#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool y = true;
    string s;
    cin >> s;
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == 's' && s[i + 1] == 's') {
            cout << "hiss" << endl;
            y = false;
            break;
        }
    }
    if (y) {
        cout << "no hiss" << endl;
    }
}
