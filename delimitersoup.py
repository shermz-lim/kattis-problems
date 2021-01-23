import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    l = int(input())
    line = input()
    s = []
    for i in range(len(line)):
        c = line[i]
        if c in ['(', '{', '[']:
            s.append(c)
        elif c in [')', '}', ']']:
            if not s:
                print("{} {}".format(c, i))
                return                
            o = s.pop()
            fail = not (
                o == '(' and c == ')' or
                o == '{' and c == '}' or
                o == '[' and c == ']'
            )
            if fail:
                print("{} {}".format(c, i))
                return
    print("ok so far")
        

def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
