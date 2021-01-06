import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    n, p = tuple(map(int, input().split()))
    arr = list(map(int, input().split()))
    for i in range(n):
        arr[i] = arr[i] - p
    dp = []
    dp.append(arr[0])
    for i in range(1, n):
        dp.append(max(arr[i], dp[i - 1] + arr[i]))
    print(max(dp))


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
