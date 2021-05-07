#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1000000;

char T[MAX_N], P[MAX_N];                         // T = text, P = pattern
int n, m;                                        // n = |T|, m = |P|

// Knuth-Morris-Pratt's algorithm specific code
int b[MAX_N];                                    // b = back table

void kmpPreprocess() {                           // call this first
    int i = 0, j = -1; b[0] = -1;                  // starting values
    while (i < m) {                                // pre-process P
        while ((j >= 0) && (P[i] != P[j])) j = b[j]; // different, reset j
        ++i; ++j;                                    // same, advance both
        b[i] = j;
    }
}

void kmpSearch() {                               // similar as above
    int freq = 0;
    int i = 0, j = 0;                              // starting values
    while (i < n) {                                // search through T
        while ((j >= 0) && (T[i] != P[j])) j = b[j]; // if different, reset j
        ++i; ++j;                                    // if same, advance both
        if (j == m) {                                // a match is found
            ++freq;
            if (freq > 1) printf(" ");
            printf("%d", i - j);
            j = b[j];                                  // prepare j for the next
        }
    }
    printf("\n");
}

int main() {

    while (fgets(P, MAX_N, stdin) != 0 && fgets(T, MAX_N, stdin) != 0) {
        T[strcspn(T, "\n")] = 0;
        P[strcspn(P, "\n")] = 0;
        n = (int)strlen(T);
        m = (int)strlen(P);
        kmpPreprocess();
        kmpSearch();
    }
    return 0;
}
