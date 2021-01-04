import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    x = float(input())
    ans = round(x * 1000 * 5280 / 4854)
    print(ans)


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
