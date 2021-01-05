import statistics
import sys
import math
import datetime
import collections
import functools

def parse_molecule(molecule):
    freq = {}
    atom_idx = 0
    while atom_idx < len(molecule):
        c = atom_idx + 1
        while c < len(molecule) and molecule[c].isdigit():
            c += 1
        count = molecule[atom_idx + 1:c]
        if count:
            count = int(count)
        else:
            count = 1
        atom = molecule[atom_idx]
        freq[atom] = freq.get(atom, 0) + count
        atom_idx = c
    return freq            

def solve():
    line = input().strip().split()
    molecule, num = line[0], int(line[1])
    freq = parse_molecule(molecule)
    for a, c in freq.items():
        freq[a] = c * num
    req_freq = parse_molecule(input().strip())
    mini = float("inf")
    for a, c in req_freq.items():
        mini = min(mini, freq.get(a, 0) // c)
    print(mini)

def main():
    tc = 1
    # tc = int(input())
    for i in range(1, tc+1):
        solve()


if __name__ == '__main__':
    main()
