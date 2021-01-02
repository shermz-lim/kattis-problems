import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    input()
    n = int(input())
    arr = []
    for i in range(n):
        pref = int(input().split()[1])
        arr.append(pref)
    arr.sort()
    t = 0
    for i in range(n):
        t += abs(i + 1 - arr[i])
    print(t)


def main():
    tc = 1
    tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
