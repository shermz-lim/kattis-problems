import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    n = int(input())
    table = {}
    for _ in range(n):
        (name, ci, di) = (x for x in input().strip().split())
        ci = int(ci)
        if (di not in table) or (di in table and table[di][0] < ci):
            table[di] = (ci, name)
    output = sorted(map(lambda x: x[1], table.values()))
    print(len(output))
    for name in output:
        print(name)


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
