import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    n = int(input())
    arr = []
    for i in range(n):
        t, v = (float(x) for x in input().split())
        arr.append((t, v))
    tot = 0
    for i in range(1, n):
        t1, v1 = arr[i - 1]
        t2, v2 = arr[i]
        area = 1 / 2 * (v1 + v2) * (t2 - t1) / 1000
        tot += area
    print(tot)


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
