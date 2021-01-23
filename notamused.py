import statistics
import sys
import math
import datetime
import collections


def solve():
    day = 1
    name_times = {}
    for line in sys.stdin.readlines():
        line = line.strip()
        if line == "OPEN":
            name_times = {}
        elif line == "CLOSE":
            output = []
            for name, times in name_times.items():
                total = 0
                i = 0
                while i < len(times):
                    total += (times[i + 1] - times[i])*10
                    i += 2
                output.append((name, total))
            output.sort(key=lambda x:x[0])
            if day > 1:
                print()
            print("Day {}".format(day))
            day += 1
            for name, price in output:
                print("{} ${:.2f}".format(name, price/100))
        else:
            (c, name, t) = (x for x in line.split())
            t = int(t)
            if name not in name_times:
                name_times[name] = []
            name_times[name].append(t)


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
