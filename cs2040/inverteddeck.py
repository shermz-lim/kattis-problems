import statistics
import sys
import math
import datetime
import collections
import functools

def is_sorted(arr):
    n = len(arr)
    for i in range(n - 1):
        if arr[i] > arr[i + 1]:
            return False
    return True

def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    if is_sorted(arr):
        print(n, n)
        return
    left_idx = -1
    for i in range(n - 1):
        if arr[i] > arr[i + 1]:
            left_idx = i
            break
    while left_idx - 1 >= 0 and arr[left_idx] == arr[left_idx - 1]:
        left_idx -= 1
    right_idx = -1
    for i in range(n - 1, 0, -1):
        if arr[i] < arr[i - 1]:
            right_idx = i
            break
    while right_idx + 1 < n and arr[right_idx] == arr[right_idx + 1]:
        right_idx += 1
    arr = arr[:left_idx] + list(reversed(arr[left_idx:right_idx + 1])) + arr[right_idx + 1:]
    if is_sorted(arr):
        print(left_idx + 1, right_idx + 1)
    else:
        print("impossible")

def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
