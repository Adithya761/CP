import sys


def solve():
    input_data = sys.stdin.read().split()
    if not input_data:
        return

    t = int(input_data[0])
    idx = 1
    out = []

    for _ in range(t):
        a = int(input_data[idx])
        b = int(input_data[idx + 1])
        c = int(input_data[idx + 2])
        d = int(input_data[idx + 3])
        idx += 4

        if d < b:
            out.append("-1")
        else:
            up_moves = d - b
            target_x = a + up_moves
            if target_x < c:
                out.append("-1")
            else:
                out.append(str(up_moves + (target_x - c)))

    sys.stdout.write("\n".join(out) + "\n")


if __name__ == "__main__":
    solve()