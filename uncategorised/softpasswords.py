import statistics
import sys
import math
import datetime
import collections
import functools

def rev_case(p):
    arr = list(p)
    for i in range(len(arr)):
        c = arr[i]
        if c.islower():
            arr[i] = c.upper()
        else:
            arr[i] = c.lower()
    return "".join(arr)

def solve():
    s = input()
    p = input()
    if s == p or s == rev_case(p):
        print("Yes")
        return
    if len(s) > len(p) and (s[1:] == p) and (s[0].isdigit()):
        print("Yes")
        return
    if len(s) > len(p) and (s[:-1] == p) and (s[-1].isdigit()):
        print("Yes")
        return
    print("No")        

def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
