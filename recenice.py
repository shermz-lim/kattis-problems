import statistics
import sys
import math
import datetime
import collections
import functools

first = {
    "1": "one", "2": "two", "3": "three", "4": "four", "5": "five",
    "6": "six", "7": "seven", "8": "eight", "9": "nine"
}
tens = {
    "11": "eleven", "12": "twelve", "13": "thirteen", "14": "fourteen",
    "15": "fifteen", "16": "sixteen", "17": "seventeen", "18": "eighteen",
    "19": "nineteen"
}
second = {
    "1": "ten", "2": "twenty", "3": "thirty", "4": "forty", "5": "fifty",
    "6": "sixty", "7": "seventy", "8": "eighty", "9": "ninety"
}

def convert(n):
    n = str(n)
    s = ""
    if len(n) == 3:
        s += first[n[0]] + "hundred"
        n = n[1:]
        if n == "00":
            return s
    if len(n) == 2:
        if n[1] == "0":
            s += second[n[0]]
            return s
        elif n[0] == "1":
            s += tens[n]
            return s
        elif n[0] == "0":
            s += first[n[1]]
            return s
        s += second[n[0]]
        n = n[1:]
    s += first[n[0]]
    return s

def solve():
    n = int(input())
    sentence = []
    idx = -1
    for i in range(n):
        sentence.append(input().strip())
        if sentence[i] == '$':
            idx = i
    for i in range(1, 1000):
        sentence[idx] = convert(i)
        length = sum(map(len, sentence))
        if length == i:
            print(" ".join(sentence))
            return

def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
