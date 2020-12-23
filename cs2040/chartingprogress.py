import statistics
import sys
import math
import datetime
import collections


def solve(lines):
    r = len(lines)
    c = len(lines[0])
    counts = []
    for line in lines:
        count = 0
        for char in line:
            if char == '*':
                count += 1
        counts.append(count)
    idx = c - 1
    for count in counts:
        dots = c - 1 - idx
        output = count * '*' + dots * '.'
        print(output.rjust(c, '.'))
        idx -= count



def main():
    tc = 1
    # tc = int(input())
    lines = []
    for line in sys.stdin.readlines():
        if line != "\n":
            lines.append(line.strip())
        else:
            if tc > 1:
                print()
            solve(lines)
            lines = []
            tc += 1
    if tc > 1:
        print()
    solve(lines)


if __name__ == '__main__':
    main()
