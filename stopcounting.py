
n = int(input())
arr = list(map(int, input().split()))

max_payout = 0
tot = 0
for i, elem in enumerate(arr):
    tot += elem
    max_payout = max(max_payout, tot / (i + 1))
tot = 0
for i, elem in enumerate(reversed(arr)):
    tot += elem
    max_payout = max(max_payout, tot / (i + 1))
print(max_payout) 
