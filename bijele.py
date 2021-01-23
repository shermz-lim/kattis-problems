import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    arr = list(map(int, input().split()))
    carr = [1, 1, 2, 2, 2, 8]
    o = []
    for i in range(6):
        o.append(str(carr[i] - arr[i]))
    print(" ".join(o))


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
