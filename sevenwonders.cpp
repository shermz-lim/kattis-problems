#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

#define ar array
#define ll long long

int main() {
    unordered_map<char, int> count;
    for (char c : "CGT") count[c]=0;
    char c; string line;
    getline(cin, line);
    istringstream sin(line);
    while (sin >> c) {
        count[c]++;
    }
    int tot = 0, mm = min(count['C'], min(count['G'], count['T']));
    for (char c : "CGT"){
        tot += pow(count[c], 2);
    }
    tot += (mm * 7);
    cout<<tot<<endl;
}