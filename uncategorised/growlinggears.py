import statistics
import sys
import math
import datetime
import collections
import functools

def calc_t(a, b, c):
    return -a * (b / 2 / a)**2 + b**2 / 2 / a + c

def solve():
    n = int(input())
    max_t = 0
    idx = -1
    for i in range(n):
        a, b, c = tuple(map(int, input().split()))
        t = calc_t(a, b, c)
        if t > max_t:
            max_t = t
            idx = i
    print(idx + 1)


def main():
    tc = 1
    tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
