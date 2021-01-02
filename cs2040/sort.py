import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    n, c = (int(x) for x in input().split())
    freq = {}
    lookup = {}
    arr = list(map(int, input().split()))
    for i in range(len(arr)):
        e = arr[i]
        freq[e] = freq.get(e, 0) + 1
        if e not in lookup:
            lookup[e] = i
    counts = [[] for _ in range(n + 1)]
    for e, count in freq.items():
        counts[count].append(e)
    output = []
    for i in range(n, -1, -1):
        lst = counts[i]
        lst.sort(key=lambda x:lookup[x])
        for e in lst:
            output.extend([str(e) for j in range(i)])
    print(" ".join(output))

        



def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
