import statistics
import sys
import math
import datetime
import collections
import functools


def solve(n):
    text = input().replace(" ", "").upper()
    arr = ['' for _ in range(len(text))]
    curr_idx = 0
    i = 0
    for c in text:
        arr[curr_idx] = c
        curr_idx += n
        if curr_idx >= len(text):
            i += 1
            curr_idx = i       
    print("".join(arr))

def main():
    while True:
        n = int(input())
        if n == 0:
            break
        solve(n)

if __name__ == '__main__':
    main()
