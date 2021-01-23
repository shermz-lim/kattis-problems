import statistics
import sys
import math
import datetime
import collections
import functools

def dfs(u, adj_list, visited, t):
    if u == t:
        return True
    for v in adj_list.get(u, []):
        if v not in visited:
            visited.add(v)
            if dfs(v, adj_list, visited, t):
                return True
    return False

def solve():
    m, n = tuple(map(int, input().split()))
    adj_list = {}
    for i in range(m):
        a, b = tuple(input().split())
        if a not in adj_list:
            adj_list[a] = []
        adj_list[a].append(b)
    for i in range(n):
        w1, w2 = tuple(input().split())
        if len(w1) != len(w2):
            print("no")
            continue
        match = True
        for i in range(len(w1)):
            c1 = w1[i]
            c2 = w2[i]
            if not dfs(c1, adj_list, set(), c2):
                match = False 
        if match:
            print("yes")
        else:
            print("no")               


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
