import math
import numpy as np
t = int(input())
for _ in range(t):
    n = int(input())
    sqrt = int(math.sqrt(n))
    a = -1
    for i in range(2 , sqrt + 1):
        if n % i == 0:
            a = i
            break
    if a == -1:
        print(f"{1} {n-1}")
    else:
        a = max(a , n //a)
        print(f"{a} {n-a}")