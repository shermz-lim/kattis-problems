import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    c = float(input())
    l = int(input())
    tot = 0
    for i in range(l):
        (w, l) = (float(x) for x in input().split())
        tot += (w * l * c)
    print(tot)


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
