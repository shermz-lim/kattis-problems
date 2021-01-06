import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    for line in sys.stdin.readlines():
        if "problem" in line.lower():
            print("yes")
        else:
            print("no")


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
