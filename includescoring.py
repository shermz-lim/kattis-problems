import statistics
import sys
import math
import datetime
import collections
import functools

scores = [
    0,100,75,60,50,45,
    40,36,32,29,26,
    24,22,20,18,16,
    15,14,13,12,11,
    10,9,8,7,6,
    5,4,3,2,1
]

def comp(a, b):
    if a[0] == b[0]:
        if a[1] == b[1]:
            if a[2] == b[2]:
                return 0
            else:
                return a[2] - b[2]
        else:
            return a[1] - b[1]
    else:
        return b[0] - a[0]

def solve():
    n = int(input())
    ccs = []
    for i in range(n):
        (s, p, f, o) = (int(x) for x in input().split())
        ccs.append((s, p, f, o, i))
    ccs.sort(key=functools.cmp_to_key(comp))
    rank = 0
    ranks = []
    ranks_freq = {}
    for i in range(n):
        if i > 0 and comp(ccs[i], ccs[i - 1]) == 0:
            rank = ranks[i - 1]
        else:
            rank = i + 1
        ranks.append(rank)
        ranks_freq[rank] = ranks_freq.get(rank, 0) + 1
    cc_scores = []
    for i in range(1, n + 1):
        rank = ranks[i - 1]
        if ranks_freq[rank] > 1 and i == rank and i <= 30:
            new_score = 0
            for j in range(ranks_freq[rank]):
                if rank + j > 30:
                    new_score += 0
                else:
                    new_score += scores[rank + j]
            scores[rank] = math.ceil(new_score / ranks_freq[rank])
        if rank > 30:
            cc_scores.append(0)
        else:
            cc_scores.append(scores[rank])
    output = [0 for _ in range(n)]
    for i in range(n):
        idx = ccs[i][4]
        output[idx] = cc_scores[i] + ccs[i][3]
    for o in output:
        print(o)

def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
