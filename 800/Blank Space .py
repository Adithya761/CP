t = int(input())

for _ in range(t):
    n = int(input())
    nums = list(map(int, input().split()))

    res = 0
    cnt = 0

    for i in range(n):
        if nums[i] == 0:
            cnt += 1
        else:
            cnt = 0

        res = max(res, cnt)

    print(res)
