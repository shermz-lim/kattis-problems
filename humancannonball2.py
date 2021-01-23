import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    (v0, deg, x1, h1, h2) = (float(x) for x in input().split())
    t = x1 / (v0 * math.cos(math.radians(deg)))
    y = v0 * t * math.sin(math.radians(deg)) - 1 / 2 * 9.81 * t**2
    if y >= (h1 + 1) and y <= (h2 - 1):
        print("Safe")
    else:
        print("Not Safe")


def main():
    tc = 1
    tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
