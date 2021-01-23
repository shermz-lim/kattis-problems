import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    n, k, r = (x for x in map(int, input().split()))
    arr = list(map(int, input().split()))
    req_freq = {}
    freq = {}
    for _ in range(r):
        b, q = (x for x in map(int, input().split()))
        req_freq[b] = q
        freq[b] = 0
    sat = set()
    left = 0
    right = 0
    smallest = n + 1
    while right < n:
        if len(sat) < len(req_freq):
            d = arr[right]
            if d in req_freq:
                freq[d] += 1
                if freq[d] >= req_freq[d]:
                    sat.add(d)
        if len(sat) == len(req_freq):
            while True:
                smallest = min(smallest, right - left + 1)
                d = arr[left]
                if d in req_freq:
                    freq[d] -= 1
                    if freq[d] < req_freq[d]:
                        sat.remove(d)
                        left += 1
                        break
                left += 1
        right += 1
    if smallest == n + 1:
        print("impossible")
    else:
        print(smallest)
    


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
