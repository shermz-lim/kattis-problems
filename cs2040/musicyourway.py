import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    attrs = input().split()
    lookup = {}
    for i in range(len(attrs)):
        lookup[attrs[i]] = i
    m = int(input())
    songs = []
    for i in range(m):
        song = input().split()
        songs.append(song)
    n = int(input())
    for i in range(n):
        if i > 0:
            print()
        attr = input()
        idx = lookup[attr]
        songs.sort(key=lambda x:x[idx])
        print(" ".join(attrs))
        for song in songs:
            print(" ".join(song))


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
