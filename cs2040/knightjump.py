import statistics
import sys
import math
import datetime
import collections
import functools

def get_dirs(x, y):
    return [
        (x+2, y+1),
        (x+2, y-1),
        (x-2, y+1),
        (x-2, y-1),
        (x+1, y+2),
        (x+1, y-2),
        (x-1, y+2),
        (x-1, y-2)
    ]
    
def in_grid(nx, ny, n, arr):
    return (
        (nx >= 0 and nx < n) and (ny >= 0 and ny < n)
        and (arr[nx][ny] != '#'))

def solve():
    n = int(input())
    arr = []
    for i in range(n):
        arr.append([c for c in input()])
    for i in range(n):
        for j in range(n):
            if arr[i][j] == 'K':
                x, y = i, j
                break
    visited = [[False for j in range(n)] for i in range(n)]
    q = collections.deque()
    q.append((x, y, 0))
    while q:
        x, y, d = q.popleft()
        if x == 0 and y == 0:
            print(d)
            return
        for nx, ny in get_dirs(x, y):
            if in_grid(nx, ny, n, arr) and not visited[nx][ny]:
                visited[nx][ny] = True
                q.append((nx, ny, d + 1))
    print(-1)

def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
