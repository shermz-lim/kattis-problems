import statistics
import math
import datetime
import collections


def solve():
    funcs=input()
    n=int(input())
    line=input()
    if n==0:
        arr=[]
    else:
        arr=list(map(int,line[1:len(line)-1].split(',')))
    q=collections.deque(arr)
    rev=False
    for func in funcs:
        if func=='R':
            rev=not rev
        else:
            if len(q)==0:
                print("error")
                return
            if rev:
                q.pop()
            else:
                q.popleft()
    if rev:
        q=reversed(q)
    print("["+",".join(list(map(str,q)))+"]")

def main():
    tc = 1
    tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
