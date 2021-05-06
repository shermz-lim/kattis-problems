import math

def solve(x):
    if x > 0:
        j = math.ceil(math.log(x) / math.log(3))
    else:
        j = -1
    left = []
    right = []
    is_left = False
    curr = 3**j
    while x > 0:
        a = curr - x
        b = x - curr
        if a == 0:
            if is_left:
                left.append(curr)
            else:
                right.append(curr)
            break 
        elif a <= x and a >= 0:
            if is_left:
                left.append(curr)
            else:
                right.append(curr)
            x = a
            is_left = not is_left    
        elif b <= x and b >= 0:
            if is_left:
                left.append(curr)
            else:
                right.append(curr)
            x = b 
        curr //= 3
    print("left pan: {}".format(" ".join(map(str, left)))) 
    print("right pan: {}".format(" ".join(map(str, right))))


def main():
    n = int(input())
    for i in range(n):
        if i > 0:
            print()
        solve(int(input()))


main()

