import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    probs = input().strip().split(';')
    total = 0
    for prob in probs:
        prob = prob.strip()
        if '-' in prob:
            (a, b) = (x for x in prob.split('-'))
            total += (int(b) - int(a) + 1)
        else:
            total += 1
    print(total)


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
