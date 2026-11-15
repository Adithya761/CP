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
        a = int(data[idx + 1])
        b = int(data[idx + 2])
        idx += 3
        
        if (a == n and b == n) or (a + b <= n - 2):
            out.append("Yes")
        else:
            out.append("No")
            
    print("\n".join(out))

if __name__ == "__main__":
    solve()