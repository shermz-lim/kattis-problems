import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    n = int(input())
    arr = []
    for i in range(n):
        arr.append(input())
    t = 0
    for i in range(1, n):
        if arr[i] == arr[i - 1]:
            t += 1
    print(t)



def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
