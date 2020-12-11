#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    cout << s[0];
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            cout << s[i + 1];
        }
    }
    cout << endl;
}
