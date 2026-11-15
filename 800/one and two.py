import sys


def solve():
    t = int(input())

    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))

        pre = [0] * n
        suf = [0] * n

        cnt = 0
        for i in range(0, n):
            if arr[i] == 2:
                cnt += 1
            pre[i] = cnt

        cnt = 0
        for i in range(n - 1, -1, -1):
            if arr[i] == 2:
                cnt += 1
            suf[i] = cnt

        found = False
        for i in range(0, n - 1):
            if pre[i] == suf[i + 1]:
                print(i + 1)
                found = True
                break

        if not found:
            print(-1)


if __name__ == "__main__":
    solve()