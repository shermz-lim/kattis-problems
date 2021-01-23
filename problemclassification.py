import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    n = int(input())
    table = {}
    for _ in range(n):
        cat_words = input().split()
        cat = cat_words[0]
        words = set(cat_words[2:])
        table[cat] = words
    inp = []
    for line in sys.stdin.readlines():
        inp.extend(line.split())
    freq = {}
    for cat in table.keys():
        freq[cat] = 0
    for word in inp:
        for cat, s in table.items():
            if word in s:
                freq[cat] += 1
    v = max(freq.values())
    res = []
    for cat, c in freq.items():
        if c == v:
            res.append(cat)
    res.sort()
    for word in res:
        print(word)
    

def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
