import statistics
import sys
import math
import datetime
import collections
import functools

def solve():
    tc = 1
    while True:
        n = int(input())
        if n == 0:
            break
        if tc > 1:
            print()        
        arr = []
        for i in range(n):
            hm, z = tuple(input().split())
            h, m = tuple(map(int, hm.split(':')))
            if h == 12:
                h = 0
            arr.append((h, m, z))
        arr.sort(key=lambda x:x[1])
        arr.sort(key=lambda x:x[0])
        arr.sort(key=lambda x:x[2])
        for h, m, z in arr:
            if h == 0:
                h = 12
            m = str(m).rjust(2, '0')
            print("{}:{} {}".format(h, m, z))
        tc += 1

def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
