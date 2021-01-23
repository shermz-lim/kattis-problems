import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    r = len(input().split())
    n = int(input())
    arr = []
    for i in range(n):
        arr.append(input())
    t1 = []
    t2 = []
    first = True
    i = 0
    while arr:
        i %= len(arr)
        i = (i + r - 1) % len(arr)
        if first:
            t1.append(arr[i])
        else:
            t2.append(arr[i])
        first = not first
        arr.pop(i)        
    print(len(t1))
    for p in t1:
        print(p)
    print(len(t2))
    for p in t2:
        print(p)    

def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
