import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    k = int(input())
    same = 0
    diff = 0
    me = input()
    f = input()
    for i in range(len(me)):
        if me[i] == f[i]:
            same += 1
        else:
            diff += 1
    corr = 0
    corr += min(k, same)
    k -= corr
    corr += (diff - k)
    print(corr)


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
