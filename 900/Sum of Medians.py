t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    A = list(map(int, input().split()))

    idx = n * k
    half = n // 2 + 1
    sum = 0
    while k > 0:
        idx -= half
        sum += A[idx]

        k -= 1

    print(sum)