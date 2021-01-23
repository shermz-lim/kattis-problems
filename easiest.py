import statistics
import sys
import math
import datetime
import collections
import functools

def sod(n):
    t = 0
    for c in str(n):
        t += int(c)
    return t

def solve():
    while True:
        n = int(input())
        if n == 0:
            break
        p = 11
        while True:
            res = n * p
            if sod(res) == sod(n):
                print(p)
                break
            p += 1

def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
