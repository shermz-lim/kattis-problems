import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    s = set()
    for i in range(10):
        s.add(int(input()) % 42)
    print(len(s))


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
