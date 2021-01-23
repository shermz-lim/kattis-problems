import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    p, t = tuple(map(int, input().split()))
    tot = 0
    for i in range(p):
        pas = True
        for j in range(t):
            test = input()
            test = test[0].lower() + test[1:]
            if test != test.lower():
                pas = False
        if pas:
            tot += 1
    print(tot)


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
