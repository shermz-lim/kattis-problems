import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    arr = list(map(int, input().split()))
    h1, h2 = arr[6], arr[7]
    arr = arr[:-2]
    arr.sort(reverse=True)
    res = []
    for i in range(6):
        for j in range(i + 1, 6):
            for k in range(j + 1, 6):
                a, b, c = arr[i], arr[j], arr[k]
                if (a + b + c) == h1:
                    arr.remove(a)
                    arr.remove(b)
                    arr.remove(c)
                    res.extend([a, b, c])
                    break
            if len(res) > 0:
                break
        if len(res) > 0:
            break
    res.extend(arr)
    print(" ".join(map(str, res)))


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
