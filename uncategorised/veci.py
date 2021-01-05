import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    x = int(input())
    y = x + 1
    x_digits = sorted(str(x))
    while y <= 999999:
        if sorted(str(y)) == x_digits:
            print(y)
            return
        y += 1
    print(0)

def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
