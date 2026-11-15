t = int(input())

for i in range(t):
    n = int(input())
    A = list(map(int, input().split()))

    if A[0] == 1:
        print("YES")
    else:
        print("NO")
        