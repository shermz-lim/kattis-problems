import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    line = input()
    freq = {}
    for i in range(0, 10):
        freq[i] = 0
    for c in line:
        c = int(c)
        freq[c] = freq.get(c, 0) + 1
    zm = freq[0]
    del freq[0]
    m = min(freq.values())
    if zm <= (m - 1):
        print(10**(zm + 1))
    else:
        for i in range(1, 10):
            if freq[i] == m:
                print(str(i) * (freq[i] + 1))
                return

def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
