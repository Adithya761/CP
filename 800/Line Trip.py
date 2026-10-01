t = int(input())

for i in range(t):
    n , x = map(int, input().split())
    nums = list(map(int, input().split()))
    last = (x - nums[-1]) * 2 + nums[-1]
    nums.append(last)

    maxDist = max(0 , nums[0] - 0)

    for i in range(1 , n + 1):
        maxDist = max(maxDist , nums[i] - nums[i-1])

    print(maxDist)