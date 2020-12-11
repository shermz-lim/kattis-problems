#include <iostream>
#include <string>
#include <unordered_set>
#include <sstream>

using namespace std;

int main()
{
    unordered_set<string> s;
    string w;
    bool f = false;
    string line;
    getline(cin, line);
    istringstream ss(line);
    while (ss >> w) {
        if (s.find(w) == s.end()) {
            s.insert(w);
        } else {
            f = true;
        }
    }
    cout << (f ? "no" : "yes") << endl;
}
