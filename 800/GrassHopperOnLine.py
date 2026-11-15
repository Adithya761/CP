
from collections import Counter
t = int(input())
for i in range(t):
    x , k = map(int, input().split())

    if x % k == 0:
        print(2)
        print(f"{x -1} {1}")
    else:
        print(1)
        print(x)







