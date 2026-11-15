def main():
    import sys
    input = sys.stdin.readline

    t = int(input())
    for _ in range(t):
        n, k, x = map(int, input().split())

        
        max_sum = n * (n + 1) // 2 - (n - k) * (n - k + 1) // 2
        min_sum = k * (k + 1) // 2

        if min_sum <= x <= max_sum:
            print("YES")
        else:
            print("NO")

if __name__ == "__main__":
    main()
