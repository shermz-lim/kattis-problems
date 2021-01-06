import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    n = int(input())
    tot = 0
    curr = 1
    for i in range(n + 1):
        tot += curr
        curr /= (i + 1)
    print(tot)


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
