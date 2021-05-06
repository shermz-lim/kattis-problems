
k = int(input())
arr = list(map(int, input().split()))
tot = 0
for i in range(k):
    tot ^= arr[i]
arr.append(tot)
k += 1

left = [-1 for _ in range(k)]
tot = 0
for i in range(k):
    tot ^= arr[i]
    left[i] = tot
right = [-1 for _ in range(k)]
tot = 0
for i in range(k - 1, -1, -1):
    tot ^= arr[i]
    right[i] = tot

q = int(input())
for i in range(q):
    l, r = tuple(map(int, input().split()))
    l = (l - 1) % k
    r = (r - 1) % k
    print(0 ^ left[r] ^ right[l])

