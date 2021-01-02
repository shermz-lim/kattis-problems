import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    n = int(input())
    s = set()
    for _ in range(n):
        line = input().strip()
        line = line.lower().replace('-', ' ')
        s.add(line)
    print(len(s))


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
