import sys


def solve():
    input = sys.stdin.read
    data = input().split()
    if not data:
        return

    t = int(data[0])
    idx = 1
    out = []

    for _ in range(t):
        n = int(data[idx])
        k = int(data[idx + 1])
        x = int(data[idx + 2])
        idx += 3

        if x != 1:
            out.append("YES")
            out.append(str(n))
            out.append(" ".join(["1"] * n))
        elif k >= 2 and n % 2 == 0:
            out.append("YES")
            out.append(str(n // 2))
            out.append(" ".join(["2"] * (n // 2)))
        elif k >= 3 and n >= 3:
            out.append("YES")
            out.append(str((n - 3) // 2 + 1))
            res = ["3"] + ["2"] * ((n - 3) // 2)
            out.append(" ".join(res))
        else:
            out.append("NO")

    print("\n".join(out))


if __name__ == "__main__":
    solve()