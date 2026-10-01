t = int(input())
for i in range(t):
    n = int(input())
    s = input()

    if "..." in s:
        print(2)
    else:
        cnt = 0
        for i in range(n):
            if s[i] == ".":
                cnt += 1
        print(cnt)