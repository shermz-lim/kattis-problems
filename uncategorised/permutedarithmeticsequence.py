import statistics
import sys
import math
import datetime
import collections
import functools

def arith(arr):
    d = arr[0] - arr[1]
    for i in range(1, len(arr) - 1):
        if arr[i] - arr[i + 1] != d:
            return False
    return True

def solve():
    arr = list(map(int, input().split()))[1:]
    if arith(arr):
        print("arithmetic")
    elif arith(sorted(arr)):
        print("permuted arithmetic")
    else:
        print("non-arithmetic")



def main():
    tc = 1
    tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
