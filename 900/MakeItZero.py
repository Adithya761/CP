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
        idx += 1 + n

        if n % 2 == 0:
            out.append("2")
            out.append(f"1 {n}")
            out.append(f"1 {n}")
        else:
            out.append("4")
            out.append(f"1 {n - 1}")
            out.append(f"1 {n - 1}")
            out.append(f"{n - 1} {n}")
            out.append(f"{n - 1} {n}")

    print("\n".join(out))


if __name__ == "__main__":
    solve()