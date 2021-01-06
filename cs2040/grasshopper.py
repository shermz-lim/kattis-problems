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
    
def in_grid(nx, ny, r, c):
    return (nx >= 0 and nx < r) and (ny >= 0 and ny < c)

def solve(line):
        r, c, gr, gc, lr, lc = tuple(map(int, line.split()))
        gr -= 1
        gc -= 1
        lr -= 1
        lc -= 1
        visited = [[False for j in range(c)] for i in range(r)]
        q = collections.deque()
        q.append((gr, gc, 0))
        visited[gr][gc] = True
        while q:
            x, y, d = q.popleft()
            if x == lr and y == lc:
                print(d)
                return
            for nx, ny in get_dirs(x, y):
                if in_grid(nx, ny, r, c) and not visited[nx][ny]:
                    visited[nx][ny] = True
                    q.append((nx, ny, d + 1))
        print("impossible")

def main():
    tc = 1
    # tc = int(input())
    for line in sys.stdin.readlines():
        solve(line)

if __name__ == '__main__':
    main()
