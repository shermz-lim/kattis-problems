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
    for i in range(n):
        for j in range(i + 1, n):
            if arr[i].startswith(arr[j]) or arr[j].startswith(arr[i]):
                print("NO")
                return
    print("YES")
    return


def main():
    tc = 1
    tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
