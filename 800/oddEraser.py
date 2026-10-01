import math

t = int(input())
for _ in range(t):
    n = int(input())
    nums = list(map(int, input().split()))

    oddGcd = 0
    evenGcd = 0

    for i in range(n):
        if i % 2 == 0:
            evenGcd = math.gcd(evenGcd, nums[i])
        else:
            oddGcd = math.gcd(oddGcd, nums[i])

    print(max(oddGcd, evenGcd))
