import statistics
import sys
import math
import datetime
import collections
import functools
import heapq


def solve():
    n, s, t = (int(x) for x in input().split())
    adj_mat = []
    for _ in range(n):
        adj_mat.append(list(map(int, input().split())))
    solved = [False for _ in range(n)]
    dists = [float("inf") for _ in range(n)]
    pq = []
    heapq.heappush(pq, (0, s))
    dists[s] = 0
    while pq:
        (dist, u) = heapq.heappop(pq)
        if solved[u]:
            continue
        if u == t:
            print(dist)
            return
        solved[u] = True
        for v in range(n):
            if not solved[v]:
                new_dist = dist + adj_mat[u][v]
                if new_dist < dists[v]:
                    dists[v] = new_dist
                    heapq.heappush(pq, (new_dist, v))

def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
