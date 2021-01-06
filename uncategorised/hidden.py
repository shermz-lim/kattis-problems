import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    p, s = tuple(input().split())
    for c in s:
        if c in p:
            if p.index(c) != 0:
                print("FAIL")
                return
            else:
                p = p[1:]
    if p:
        print("FAIL")
    else:
        print("PASS")


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
