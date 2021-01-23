import statistics
import sys
import math
import datetime
import collections
import functools

def last(y):
    return y[len(y) - 1]

def solve():
    y, p = (x for x in input().split())
    if y[-1] == 'e':
        print(y+"x"+p)
    elif y[-1] in ['a', 'i', 'o', 'u']:
        print(y[:-1]+"ex"+p)
    elif y[-2:] == "ex":
        print(y + p)
    else:
        print(y + "ex" + p)


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
