import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    while True:
        try:
            domain = input().split()[1:]
            codomain = input().split()[1:]
            d_set = set()
            naf = False
            n = int(input())
            table = {}
            inj = True
            for i in range(n):
                l_r = input().split()
                l, r = l_r[0], l_r[2]
                if l in d_set:
                    naf = True
                if r in table:
                    inj = False
                table[r] = l
                d_set.add(l)
            suj = len(table.keys()) == len(codomain)
            if naf:
                print("not a function")
            elif inj and suj:
                print("bijective")
            elif inj:
                print("injective")
            elif suj:
                print("surjective")
            else:
                print("neither injective nor surjective")
        except EOFError:
            break


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
