#include <iostream>
#include <string>

using namespace std;

int main()
{
    string m;
    int d;
    cin >> m >> d;
    if ((m == "OCT" && d == 31) || (m == "DEC" && d == 25)) {
        cout << "yup";
    } else {
        cout << "nope";
    }
    cout << endl;
}
