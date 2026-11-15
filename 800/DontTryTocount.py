t = int(input())

for i in range(t):
    m , n = map(int, input().split())
    x  = input()
    s = input()

    if s in x:
        print(0)
        continue
    found = False
    for i in range(1 , 6):
        x += x
        if s in x:
            print(i)
            found = True
            break

    if not found:
        print(-1)


