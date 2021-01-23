import statistics
import sys
import math
import datetime
import collections
import functools


def solve():
    f,s,g,u,d = (int(x) for x in input().split())
    visited = [False for _ in range(f + 1)]
    q = collections.deque()
    q.append((s, 0))
    while q:
        (x, dist) = q.popleft()
        if x == g:
            print(dist)
            return
        up = x + u
        down = x - d
        if up <= f and not visited[up]:
            visited[up] = True
            q.append((up, dist + 1))
        if down >= 0 and not visited[down]:
            visited[down] = True
            q.append((down, dist + 1))
    print("use the stairs")


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
