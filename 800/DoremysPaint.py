from collections import Counter
t = int(input())
for i in range(t):
    n = int(input())
    A = list(map(int, input().split()))

    freq = Counter(A)
    if len(freq) > 2:
        print("NO")
    else:
        val_one = 0
        val_two = 0
        for (k , v) in freq.items():
            if val_one == 0:
                val_one = v
            else:
                val_two = v
        if abs(val_one - val_two) <= 1 or len(freq) == 1:
            print("YES")
        else:
            print("NO")

