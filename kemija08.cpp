#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

#define ar array
#define ll long long

int main() {
    unordered_set<char> s= {'a', 'e', 'i', 'o', 'u'};
    char c;
    string line;
    getline(cin, line);
    istringstream sin(line);
    sin >> noskipws;
    while (sin>>c){
        cout << c;
        if (!(s.find(c) == s.end())) {
            sin>>c;sin>>c;
        }
    }
    cout << endl;
}