from collections import Counter
t = int(input())
for i in range(t):
    n , k = map(int, input().split())
    A = list(map(int, input().split()))

    found = False
    for ele in A:
        if ele == k:
            found = True
    if not found:
        print("NO")
    else:
        print("YES")



