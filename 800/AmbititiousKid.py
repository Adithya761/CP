n = int(input())
arr = list(map(int, input().split()))
mini = 999999
for x in arr:
    mini = min(mini , abs(x))
print(mini)