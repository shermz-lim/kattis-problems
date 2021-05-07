#include <bits/stdc++.h>
#include <deque> 


using namespace std;

#define ar array
#define ll long long

string line;

void solve() {
    getline(cin, line);
    list<char> lst;
    list<char>::iterator ptr = lst.end();
    for (int i=0; i < line.size(); i++) {
        char c = line[i];
        switch (c) {
        case '<':
            if (ptr != lst.begin()) {
                lst.erase(prev(ptr));
            }
            break;
        case '[':
            ptr = lst.begin();
            break;
        case ']':
            ptr = lst.end();
            break;            
        default:
            lst.insert(ptr, c);
            break;
        }
    }
    for(auto i : lst){
        cout << i;
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;
    getline(cin, line);
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}