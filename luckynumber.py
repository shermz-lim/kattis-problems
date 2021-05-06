def solve():
    n = int(input())
    valid_nums = [str(x) for x in range(1, 10)]
    for i in range(2, n + 1):
        new_valid_nums = []
        for num in valid_nums:
            for d in "0123456789":
                new_num = int(num + d)
                if new_num % i == 0:
                    new_valid_nums.append(str(new_num))
        valid_nums = new_valid_nums
    print(len(valid_nums))

solve()
