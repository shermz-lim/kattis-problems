import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    res = []
    for i in range(1, 6):
        line = input()
        if "FBI" in line:
            res.append(str(i))
    if res:
        print(" ".join(res))
    else:
        print("HE GOT AWAY!")


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
