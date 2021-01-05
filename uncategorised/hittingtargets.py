import statistics
import sys
import math
import datetime
import collections
import functools

def euclid(x1,y1,x,y):
    hor = (x1-x)**2
    ver = (y1-y)**2
    return math.sqrt(hor+ver)

def solve():
    m = int(input())
    rects = []
    circles = []
    for i in range(m):
        line = input().split()
        if line[0] == "rectangle":
            rects.append(tuple(map(int, line[1:])))
        else:
            circles.append(tuple(map(int, line[1:])))
    n = int(input())
    for i in range(n):
        x, y = tuple(map(int, input().split()))
        t = 0
        for (x1,y1,x2,y2) in rects:
            if x >= x1 and x <= x2 and y >= y1 and y <= y2:
                t += 1
        for (x1,y1,r) in circles:
            if euclid(x1,y1,x,y) <= r:
                t += 1
        print(t)

def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
