import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    l1 = input()
    l2 = input()
    o = []
    for i in range(len(l1)):
        if l1[i] == l2[i]:
            o.append('.')
        else:
            o.append('*')
    print(''.join(o))


def main():
    tc = 1
    tc = int(input())
    for i in range(1, tc+1):
        if i > 1:
            print()
        solve()


if __name__ == '__main__':
    main()
