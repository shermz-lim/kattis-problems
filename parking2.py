import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()
    mid = (arr[0] + arr[n - 1]) // 2
    t = (mid - arr[0]) * 2 + (arr[n - 1] - mid) * 2
    print(t)

def main():
    tc = 1
    tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
