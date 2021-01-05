import statistics
import sys
import math
import datetime
import collections
import functools

target = (
    (0,0,0),
    (0,0,0),
    (0,0,0),
)

def solve():
    curr = []
    for i in range(3):
        curr.append(list(map(int, input().split())))
    curr = tuple(map(tuple, curr))
    visited = set()    
    q = collections.deque()
    visited.add(curr)
    q.append((curr, 0))
    while q:
        u, dist = q.popleft()
        if u == target:
            print(dist)
            return
        for i in range(3):
            for j in range(3):
                v = [[0 for _ in range(3)] for __ in range(3)]
                for k in range(3):
                    for l in range(3):
                        v[k][l] = u[k][l]
                        if k == i or l == j:
                            v[k][l] = (v[k][l] + 1)%4
                v = tuple(map(tuple, v))
                if v not in visited:
                    visited.add(v)
                    q.append((v, dist + 1))
    print(-1)


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
