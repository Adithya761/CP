import sys
input = sys.stdin.readline

t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    A = list(map(int, input().split()))

    P = [0] * (n + 1)
    for i in range(1, n + 1):
        P[i] = (P[i - 1] + A[i - 1]) % k

    arr = [0] * (k + 1)
    ans = 0
    for r in range(k + 1, n + 1):
        arr[P[r - k - 1]] += 1
        ans += arr[P[r]]

    print(ans)