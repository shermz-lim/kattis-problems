
table = {
    1: 2,
    7: 3,
    4: 4,
    2: 5,
    3: 5,
    5: 5,
    0: 6,
    6: 6,
    9: 6,
    8: 7,
}

def base(k):
    smallest = 10
    for digit, sticks in table.items():
        if sticks == k and digit != 0:
            smallest = min(smallest, digit)
    return smallest

mem = {}
def get_smallest(n):
    if n < 8:
        return base(n)
    elif n in mem:
        return mem[n]
    else:
        smallest = float("inf")
        for i in range(10):
            smallest = min(smallest, get_smallest(n - table[i]) * 10 + i)
        mem[n] = smallest
        return smallest
    
def get_biggest(n):
    if n % 2 == 0:
        return "1" * (n//2)
    else:
        return "7" + "1" * (n//2-1)


def solve():
    n = int(input())
    smallest = get_smallest(n)
    biggest = get_biggest(n)
    print("{} {}".format(smallest, biggest))


t = int(input())
for i in range(t):
    solve()
