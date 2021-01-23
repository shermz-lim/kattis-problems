import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    n = int(input())
    while True:
        string = str(n)
        t = 0
        for c in string:
            t += int(c)
        if n % t == 0:
            print(n)
            return
        n += 1


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
