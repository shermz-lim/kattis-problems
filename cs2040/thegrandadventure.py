import statistics
import sys
import math
import datetime
import collections
import functools

mapping = {
    'b': '$',
    't': '|',
    'j': '*'
}

def solve():
    line = input()
    s = []
    for char in line:
        if char in mapping.values():
            s.append(char)
        elif char in mapping.keys():
            if not s or mapping[char] != s.pop():
                print("NO")
                return
    if s:
        print("NO")
    else:
        print("YES")

def main():
    tc = 1
    tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
