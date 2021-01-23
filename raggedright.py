import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    lst = list(sys.stdin.readlines())
    n = max(map(len, lst))
    r = 0
    for line in lst[:-1]:
        m = len(line)
        r += (n - m)**2
    print(r)

def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
