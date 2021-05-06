
def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    curr = 1
    for bi in arr:
        curr *= 2
        curr -= bi
        if curr < 0:
            print("error")
            return
    print(curr % (10**9 + 7))

solve()

