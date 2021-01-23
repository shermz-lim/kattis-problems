import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    n = int(input())
    for i in range(n):
        line = input()
        print(len(line))


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
