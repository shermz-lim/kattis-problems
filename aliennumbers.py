import statistics
import sys
import math
import datetime
import collections
import functools


def solve(tc):
    num, src, tgt = tuple(input().split())
    b_s = len(src)
    dec = 0
    for i in range(len(num)):
        d = num[i]
        power = len(num) - i - 1
        dec += (src.index(d) * (b_s**power))
    b_t = len(tgt)
    output = ""
    while dec > 0:
        output += tgt[(dec % b_t)]
        dec = dec // b_t
    print("Case #{}: {}".format(tc, output[::-1]))
    

def main():
    tc = 1
    tc = int(input())
    for i in range(1, tc+1):
        solve(i)


if __name__ == '__main__':
    main()
