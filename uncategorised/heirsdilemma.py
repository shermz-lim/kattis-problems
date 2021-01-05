import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    (l, h) = (int(x) for x in input().split())
    t = 0
    for x in range(l, h + 1):
        c1 = len(set(str(x))) == 6
        c2 = True
        for c in str(x):
            c = int(c)
            if c == 0 or x % c != 0:
                c2 = False
                break
        if c1 and c2:
            t += 1
    print(t)


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
