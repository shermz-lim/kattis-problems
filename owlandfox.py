import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    n = int(input())
    n_sum = sum([int(c) for c in str(n)]) - 1
    for x in range(n - 1, -1, -1):
        if sum([int(c) for c in str(x)]) == n_sum:
            print(x)
            return

def main():
    tc = 1
    tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
