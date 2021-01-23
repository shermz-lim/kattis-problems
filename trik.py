import statistics
import sys
import math
import datetime
import collections
import functools

def swap(i, j, arr):
    arr[i], arr[j] = arr[j], arr[i]

def solve():
    arr = [1, 0, 0]
    line = input()
    for c in line:
        if c == 'A':
            swap(0, 1, arr)
        elif c == 'B':
            swap(1, 2, arr)
        else:
            swap(0, 2, arr)
    print(arr.index(1) + 1)

def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
