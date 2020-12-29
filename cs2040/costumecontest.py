import statistics
import sys
import math
import datetime
import collections


def solve():
    n = int(input())
    freq = {}
    for i in range(n):
        s = input()
        if s not in freq:
            freq[s] = 0
        freq[s] += 1
    low = min(freq.values())
    res = []
    for s, count in freq.items():
        if count == low:
            res.append(s)
    res.sort()
    for s in res:
        print(s)
        

def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
