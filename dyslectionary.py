import statistics
import sys
import math
import datetime
import collections


def solve(arr):
    arr.sort(key=lambda x: x[::-1])
    maxlen = max(map(lambda x: len(x), arr))
    for word in arr:
        print(word.rjust(maxlen))

def main():
    tc = 1
    # tc = int(input())
    arr = []
    for line in sys.stdin:
        if line == "\n":
            if tc > 1:
                print()
            solve(arr)
            arr = []
            tc += 1
        else:        
            arr.append(line.strip("\n"))
    if arr:
        if tc > 1:
            print()        
        solve(arr)

if __name__ == '__main__':
    main()
