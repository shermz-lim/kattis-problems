import statistics
import sys
import math
import datetime
import collections


def solve():
    coords = []
    for i in range(4):
        for j in range(4 if i < 3 else 3):
            coords.append((i, j))
    arr = []
    for i in range(4):
        arr.append([c for c in input()])
    tot = 0
    for i in range(4):
        for j in range(4):
            if arr[i][j] != '.':
                (x, y) = coords[ord(arr[i][j]) - ord('A')]
                tot += abs(x - i)
                tot += abs(y - j)
    print(tot)

def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
