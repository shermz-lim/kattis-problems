import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    D, d, s = tuple(map(float, input().split()))
    r = (D - d) / 2

    theta = math.acos((2 * (r ** 2) - (d + s) ** 2) / (2 * (r ** 2)))

    print(int(2 * math.pi / (theta)))


def main():
    tc = 1
    tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
