t = int(input())

for _ in range(t):
    s = input()

    zeroes = 0
    ones = 0

    for c in s:
        if c == '0':
            zeroes += 1
        else:
            ones += 1

    minimum = min(zeroes, ones)

    if minimum % 2 == 0:
        print("NET")
    else:
        print("DA")
