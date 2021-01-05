import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    word = set(input())
    guesses = input()
    l = 0
    for g in guesses:
        if g in word:
            word.remove(g)
            if len(word) == 0:
                print("WIN")
                return
        else:
            l += 1
            if l == 10:
                print("LOSE")
                return

def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
