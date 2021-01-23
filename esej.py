import statistics
import sys
import math
import datetime
import collections
import functools

alphas = "abcdefghijklmnopqrstuvwxyz"

def solve():
    a, b = (int(x) for x in input().split())
    words = [""]
    total = 0
    for i in range(15):
        new_words = []
        for c in alphas:
            for word in words:                
                new_words.append(word + c)
                total += 1
                if total == b:
                    break
            if total == b:
                break
        words.extend(new_words)            
        if total == b:
            break                                    
    print(" ".join(words[1:]))


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
