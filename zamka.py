import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    l = int(input())
    d = int(input())
    x = int(input())
    for i in range(l, d + 1):
        t = sum([int(c) for c in str(i)])
        if t == x:
            print(i)
            break
    for i in range(d, l - 1, -1):
        t = sum([int(c) for c in str(i)])
        if t == x:
            print(i)
            break

def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
