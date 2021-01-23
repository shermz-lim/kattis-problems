import statistics
import sys
import math
import datetime
import collections
import functools

vowels = "aeiouy"

def solve():
    for line in sys.stdin.readlines():
        words = line.split()
        for i in range(len(words)):
            word = words[i]
            if word[0] in vowels:
                words[i] = word + "yay"
            else:
                idx = len(word)
                for j in range(len(word)):
                    if word[j] in vowels:
                        idx = j
                        break
                new_word = word[idx:] + word[:idx] + "ay"
                words[i] = new_word
        print(" ".join(words))


def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
