import statistics
import sys
import math
import datetime
import collections

dirs = [
    (2, 1),
    (2, -1),
    (-2, 1),
    (-2, -1),
    (1, 2),
    (1, -2),
    (-1, 2),
    (-1, -2),
]

def comp(a, b):
    if a[1] == b[1]:
        return int(a[0]) - int(b[0])
    else:
        return int(b[1]) - int(a[1])

def in_grid(na, nb):
    return (na >= 0 and na < 8) and (nb >= 0 and nb < 8)

def solve():
    pos = input()
    x = ord(pos[0]) - ord('a')
    y = ord(pos[1]) - ord('1')
    visited = [[False for j in range(8)] for i in range(8)]
    dists = [[float("inf") for j in range(8)] for i in range(8)]
    q = collections.deque()
    q.append((x, y))
    visited[x][y] = True
    dists[x][y] = 0
    while q:
        a, b = q.popleft()
        for ca, cb in dirs:
            na = a + ca
            nb = b + cb
            if in_grid(na, nb) and not visited[na][nb]:
                visited[na][nb] = True
                dists[na][nb] = dists[a][b] + 1
                q.append((na, nb))
    v = max(map(lambda d: max(d), dists))
    result = []
    for i in range(8):
        for j in range(8):
            if dists[j][7 - i] == v:
                result.append((j, 7 - i))
    print("{} {}".format(v, " ".join(
        [chr(res[0] + ord('a')) + chr(res[1] + ord('1')) for res in result]
    )))



def main():
    tc = 1
    tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
