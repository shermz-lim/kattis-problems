import statistics
import sys
import math
import datetime
import collections
import functools
import random


def solve():
    curr = 0
    me = True
    while curr < 99:
        if me:
            if curr % 3 == 0:
                curr += random.randint(1, 2)
            else:
                curr = curr + 1 if ((curr + 1) % 3 == 0) else (curr + 2)
            print(curr)
        else:
            curr = int(input())
        me = not me


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
