import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    n, m, p = tuple(map(int, input().split()))
    crank = list(map(int, input().split()))
    back = list(map(int, input().split()))
    ratios = []
    for i in range(n):
        for j in range(m):
            ratios.append(crank[i]/back[j])
    ratios.sort()
    for i in range(len(ratios) - 1):
        curr = ratios[i]
        nex = ratios[i + 1]
        if (curr + curr * p / 100) < nex:
            print("Time to change gears!")
            return
    print("Ride on!")


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
