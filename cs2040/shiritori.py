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
    s = set()
    s.add(arr[0])
    for i in range(1, n):
        a = arr[i - 1]
        b = arr[i]
        if a[len(a) - 1] != b[0] or b in s:
            if i % 2 == 0:
                print("Player 1 lost")
            else:
                print("Player 2 lost")
            return
        s.add(b)
    print("Fair Game")


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
