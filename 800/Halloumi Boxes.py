from operator import truediv

t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    nums = list(map(int, input().split()))

    isSorted = True

    for i in range(1 , n):
        if nums[i] < nums[i-1]:
            isSorted = False
            break
    if( isSorted ):
        print("YES")
    else:
        if k > 1:
            print("YES")
        else:
            print("NO")