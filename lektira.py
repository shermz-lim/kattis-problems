import statistics
import sys
import math
import datetime
import collections
import functools


def main():
    word = input()
    curr = word
    for i in range(1, len(word) - 1):
        for j in range(i + 1, len(word)):
            word1 = word[:i][::-1]
            word2 = word[i:j][::-1]
            word3 = word[j:][::-1]
            res_word = word1 + word2 + word3
            if res_word < curr:
                curr = res_word
    print(curr)

if __name__ == '__main__':
    main()
