import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    env = {}
    for line in sys.stdin.readlines():
        line = line.strip()
        if line == "0":
            break
        arr = line.split()
        if len(arr) == 3 and arr[1] == "=":
            env[arr[0]] = int(arr[2])
            continue
        unknowns = []
        total = 0
        for i in range(0, len(arr), 2):
            term = arr[i]
            if term.isdigit():
                total += int(term)
            elif term in env:
                total += env[term]
            else:
                unknowns.append(term)
        if total == 0 and len(unknowns) == 0:
            print(0)
            continue
        output = ([str(total)] if total != 0 else []) + unknowns
        print(" + ".join(output))

def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
