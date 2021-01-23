import statistics
import sys
import math
import datetime
import collections
import functools

def calculate(arr):
    t = 0
    for i in range(len(arr)):
        t += (arr[i] * ((4 / 5) ** i))
    t /= 5
    return t

def solve():
    n = int(input())
    arr = []
    for i in range(n):
        arr.append(int(input()))
    arr.sort(reverse=True)
    print(calculate(arr))
    g = 0    
    for i in range(n):
        g += calculate(arr[:i] + arr[i + 1:])
    print(g / n)

def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
