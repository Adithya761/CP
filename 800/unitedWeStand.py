import sys

input = sys.stdin.read


def solve():
    data = input().split()
    if not data:
        return

    t = int(data[0])
    idx = 1
    out = []

    for _ in range(t):
        n = int(data[idx])
        idx += 1
        A = [int(x) for x in data[idx : idx + n]]
        idx += n

        maxi = max(A)
        b = []
        c = []

        for x in A:
            if x == maxi:
                c.append(x)
            else:
                b.append(x)

        if not b:
            out.append("-1")
        else:
            out.append(f"{len(b)} {len(c)}")
            out.append(" ".join(map(str, b)))
            out.append(" ".join(map(str, c)))

    sys.stdout.write("\n".join(out) + "\n")


if __name__ == "__main__":
    solve()