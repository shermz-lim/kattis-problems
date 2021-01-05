import statistics
import sys
import math
import datetime
import collections
import functools

keyboard = ["qwertyuiop", "asdfghjkl ", "zxcvbnm   "]
keyboard_arr = []
for line in keyboard:
    keyboard_arr.append([c for c in line])
lookup = {}
for i in range(3):
    for j in range(10):
        lookup[keyboard_arr[i][j]] = (i, j)

def solve():
    target, l = tuple(input().split())
    l = int(l)
    words = []
    for _ in range(l):
        word = input()
        dist = 0
        for i in range(len(word)):
            x1, y1 = lookup[word[i]]
            x2, y2 = lookup[target[i]]
            dist += abs(x1 - x2)
            dist += abs(y1 - y2)
        words.append((word, dist))
    words.sort(key=lambda x:x[0])
    words.sort(key=lambda x:x[1])
    for word, d in words:
        print(word, d)

def main():
    tc = 1
    tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
