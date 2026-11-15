t = int(input())
for _ in range(t):
    n = int(input())
    A = list(map(int, input().split()))

    B = [0] * (n)

    for i in range(n):
        B[i] = n + 1 - A[i]
    
    print(*B)

