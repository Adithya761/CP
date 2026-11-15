from collections import Counter
t = int(input())
for i in range(t):
    n= int(input())
    A = list(map(int, input().split()))

    sum = 0
    for x in A:
        sum += x
    print(-sum)




