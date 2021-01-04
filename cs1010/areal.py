import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    a = int(input())
    print(math.sqrt(a)*4)


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
