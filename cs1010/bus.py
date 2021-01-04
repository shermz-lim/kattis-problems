import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    k = int(input())
    t = 0
    for i in range(k):
        t += 0.5
        t *= 2
    print(int(t))


def main():
    tc = 1
    tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
