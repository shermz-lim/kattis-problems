import statistics
import sys
import math
import datetime
import collections
import functools

def get_dec(val, b):
    dec = 0
    val = str(val)[::-1]
    for i in range(len(val)):
        d = int(val[i])
        if b == 8 and d >= 8:
            return 0
        dec += (d * (b**(i)))
    return dec

def solve():
    k, val = tuple(map(int, input().split()))
    print("{} {} {} {}".format(
        k, get_dec(val, 8), get_dec(val, 10), get_dec(val, 16)
    ))



def main():
    tc = 1
    tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
