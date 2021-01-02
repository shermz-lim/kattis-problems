import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    x, y = (int(c) for c in input().split())
    t = x * 4 + y * 3
    if t % 2 == 0:
        print("possible")
    else:
        print("impossible")


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
