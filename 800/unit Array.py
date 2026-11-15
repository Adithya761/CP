t = int(input())

for _ in range(t):
    n = int(input())
    A = map(int, input().split())

    pos = 0
    neg = 0

    for x in A:
        if x > 0:
            pos += 1
        else:
            neg += 1

    ops = 0
    while pos < neg or neg % 2 == 1:
        pos += 1
        neg -= 1
        ops += 1

    print(ops)


