import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    (h, v) = (int(x) for x in input().split())
    print(math.ceil(h / math.sin(math.radians(v))))


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
