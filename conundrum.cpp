#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

int main() {
    string line;
    getline(cin, line);
    istringstream sin(line);
    char c;
    int i = 0, tot = 0;
    while (sin >> c) {
        bool noc = (
            i % 3 == 0 && c == 'P' ||
            i % 3 == 1 && c == 'E' ||
            i % 3 == 2 && c == 'R'
        );
        if (!noc) {
            tot++;
        }
        i++;
    }
    cout<<tot<<endl;
}