import statistics
import sys
import math
import datetime
import collections
import functools
import operator

def solve():
    student_proj = {}
    proj_freq = {}
    proj_name = ""
    for line in sys.stdin.readlines():
        if line.startswith("0"):
            break
        elif line.startswith("1"):            
            for student, proj in student_proj.items():
                if len(proj) > 1:
                    continue
                proj_freq[proj.pop()] += 1
            output = list(proj_freq.items())
            output.sort(key=lambda x:x[0])
            output.sort(key=lambda x:x[1], reverse=True)
            for proj, freq in output:
                print("{} {}".format(proj, freq))
            proj_freq = {}                
            student_proj = {}
            pass
        elif line.isupper():
            proj_name = line.strip()
            proj_freq[proj_name] = 0
        else:
            student = line
            if student not in student_proj:
                student_proj[student] = set()
            student_proj[student].add(proj_name)

def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
