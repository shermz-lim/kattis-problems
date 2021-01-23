import statistics
import sys
import math
import datetime
import collections


def solve():
    n = int(input())
    s = set()
    for i in range(n):
        (x, y) = (int(c) for c in input().split())
        s.add((x, y))
    tot = 0
    for (x, y) in list(s):
        points = [
            (x + 2018, y),
            (x - 2018, y),
            (x, y + 2018),
            (x, y - 2018),
            (x + 1118, y + 1680),
            (x - 1118, y + 1680),
            (x - 1118, y - 1680),
            (x + 1118, y - 1680),
            (x + 1680, y + 1118),
            (x - 1680, y + 1118),
            (x + 1680, y - 1118),
            (x - 1680, y - 1118),
        ]
        for point in points:
            if point in s:
                tot += 1
        s.remove((x, y))
    print(tot)



def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
