import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    words = input().split()
    t = 0
    for word in words:
        if "ae" in word:
            t += 1
    if t / len(words) >= 0.4:
        print("dae ae ju traeligt va")
    else:
        print("haer talar vi rikssvenska")


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
