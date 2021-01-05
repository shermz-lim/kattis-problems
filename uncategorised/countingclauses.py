import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    m, n = (int(x) for x in input().split())
    arr = []
    for i in range(m):
        arr.append(list(map(int, input().split())))
    if m >= 8:
        print("satisfactory")
    else:
        print("unsatisfactory")


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
