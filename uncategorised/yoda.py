import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    n = input()[::-1]
    m = input()[::-1]
    i = 0
    j = 0
    new_n = ""
    new_m = ""
    while i < len(n) and j < len(m):
        if n[i] > m[j]:
            new_n += n[i]
        elif n[i] < m[j]:
            new_m += m[j]
        else:
            new_n += n[i]
            new_m += m[j]
        i += 1
        j += 1
    while i < len(n):
        new_n += n[i]
        i += 1
    while j < len(m):
        new_m += m[j]
        j += 1        
    if len(new_n) == 0:
        print("YODA")
    else:
        print(int(new_n[::-1]))
    if len(new_m) == 0:
        print("YODA")
    else:
        print(int(new_m[::-1]))    

def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
