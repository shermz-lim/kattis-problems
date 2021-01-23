import statistics
import sys
import math
import datetime
import collections
import functools

def cmp(w1, w2):
    if w1[1] == w2[1]:
        if w1[0] < w2[0]:
            return -1
        else:
            return 1
    return w2[1] - w1[1]

def solve():
    n = int(input())
    name_words = {}
    for _ in range(n):
        line = input().split()
        name = line[0]
        words = line[1:]
        if name not in name_words:
            name_words[name] = []
        name_words[name].extend(words)
    freq = {}
    tot_freq = {}
    for words in name_words.values():
        for word in set(words):
            freq[word] = freq.get(word, 0) + 1
        for word in words:
            tot_freq[word] = tot_freq.get(word, 0) + 1
    result = []    
    for word, count in freq.items():
        if count == len(name_words):
            result.append((word, tot_freq[word]))
    if not result:
        print("ALL CLEAR")
        return            
    result.sort(key=functools.cmp_to_key(cmp))
    for word in result:
        print(word[0])


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
