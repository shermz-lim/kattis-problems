
def solve():
    params = list(map(int, input().split()))
    c, d = params[-2], params[-1]
    params = params[:-2]
    inputs = list(map(int, input().split()))
    
    mem = {}
    def recurse(x, y):
        if x <= 0 or y <= 0:
            return d
        elif (x, y) in mem:
            return mem[(x, y)]
        else:
            tot = c 
            for i in range(0, len(params), 2):
                tot += recurse(x - params[i], y - params[i+1]) 
            mem[(x, y)] = tot
            return tot

    for i in range(0, len(inputs), 2):
        print(recurse(inputs[i], inputs[i+1]))
            

def main():
    n = int(input())
    for i in range(n):
        solve()
        print()

main()

