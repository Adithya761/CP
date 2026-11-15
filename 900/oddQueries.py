t = int(input())

for _ in range(t):
    n , q = map(int, input().split())
    arr = list(map(int, input().split()))
    P = [0] * (n + 2)
    tot = 0
    for i in range(n):
        P[i + 1] = P[i] + arr[i]
        tot = tot + arr[i]

    for _ in range(q):
        l , r , k = map(int, input().split())
        prev = P[r] - P[l-1] if l > 0 else 0
        nl = (r - l + 1) * k

        if (tot + nl - prev) % 2 == 1:
            print("YES")
        else:
            print("NO")