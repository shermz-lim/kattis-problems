import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    n, l = tuple(map(int, input().split()))
    arr = []
    curr = 0
    t = 0    
    for i in range(n):
        d, r, g = tuple(map(int, input().split()))
        t += (d - curr)
        curr = d
        if (t % (r + g)) < r:
            t += (r - (t % (r + g)))
    t += (l - curr)
    print(t)


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
