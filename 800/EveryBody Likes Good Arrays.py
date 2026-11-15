t = int(input())

for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))

    ops = 0

    for i in range(1 , n):
        parity1 = arr[i] % 2
        parity2 = arr[i - 1] % 2

        if parity1 == parity2:
            ops += 1
    
    print(ops)
    