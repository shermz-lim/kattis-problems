import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    n = int(input())
    t = 0
    for i in range(n):
        line = input().strip().lower()
        if "pink" in line or "rose" in line:
            t += 1
    if t:
        print(t)
    else:
        print("I must watch Star Wars with my daughter")


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
