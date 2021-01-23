import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    n = int(input())
    l = 0
    r = 1000
    for i in range(n):
        x, y = tuple(map(int, input().split()))
        if x > r or y < l:
            print("edward is right")
            return
        l = max(l, x)
        r = min(r, y)
    print("gunilla has a point")


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
