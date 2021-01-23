import statistics
import sys
import math
import datetime
import collections
import functools

table = {
    "000": "0",
    "001": "1",
    "010": "2",
    "011": "3",
    "100": "4",
    "101": "5",
    "110": "6",
    "111": "7",
}

def solve():
    bin = input()
    n = len(bin)
    if n % 3 > 0:
        n += (3 - n % 3)
    bin = bin.rjust(n, '0')
    ans = ""
    for i in range(0, n, 3):
        ans += table[bin[i:i+3]]
    print(ans)


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
