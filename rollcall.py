import statistics
import sys
import math
import datetime
import collections
import functools


def comp(name1, name2):
    if name1[1] == name2[1]:
        if name1[0] < name2[0]:
            return -1
        else:
            return 1
    elif name1[1] < name2[1]:
        return -1
    else:
        return 1

def solve():
    first_freq = {}
    names = []
    for line in sys.stdin.readlines():
        (first, last) = (name for name in line.split())
        if first not in first_freq:
            first_freq[first] = 0
        first_freq[first] += 1
        names.append((first, last))
    names.sort(key=functools.cmp_to_key(comp))
    for name in names:
        if first_freq[name[0]] > 1:
            print(" ".join(name))
        else:
            print(name[0])


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
