import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    x = int(input())
    op = input()
    y = int(input())    
    if op == "*":
        print(x * y)
    else:
        print(x + y)


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
