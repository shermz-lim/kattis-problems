#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n, m, sum;
    cin >> n >> m;
    map<int, int> freq;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            freq[i + j] += 1;        
        }
    }
    int maxFreq = 0;
    for (auto i = freq.begin(); i != freq.end(); i++) {
        maxFreq = i->second > maxFreq ? i->second : maxFreq;
    }
    for (auto i = freq.begin(); i != freq.end(); i++) {
        if (i->second == maxFreq) {
            cout << i->first << endl;
        }
    }
}
