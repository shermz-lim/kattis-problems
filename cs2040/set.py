import statistics
import sys
import math
import datetime
import collections
import functools

def valid(s1, s2, s3):
    return (
        ((s1 == s2) and (s2 == s3)) or
        ((s1 != s2 and s2 != s3) and s1 != s3)
    )

def valid_set(s1, s2, s3):
    for i in range(4):
        if not valid(s1[i], s2[i], s3[i]):
            return False
    return True

def solve():
    arr = []
    for i in range(4):
        arr.extend(input().split())
    y = False
    for i in range(12):
        for j in range(i + 1, 12):
            for k in range(j + 1, 12):
                if valid_set(arr[i], arr[j], arr[k]):
                    print(i + 1, j + 1, k + 1)
                    y = True
    if not y:
        print("no sets")

def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
