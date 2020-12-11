#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<char, int> dmap = {
        {'A', 11},
        {'K', 4},
        {'Q', 3},
        {'J', 20},
        {'T', 10},
        {'9', 14},
        {'8', 0},
        {'7', 0},
    };
    unordered_map<char, int> ndmap = {
        {'A', 11},
        {'K', 4},
        {'Q', 3},
        {'J', 2},
        {'T', 10},
        {'9', 0},
        {'8', 0},
        {'7', 0},
    };
    int n, p = 0;
    char d;
    char v, s;
    cin >> n >> d;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> v >> s;
            p += s == d ? dmap[v] : ndmap[v];
        }
    }
    cout << p << endl;
}
