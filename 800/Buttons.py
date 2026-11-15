import sys

def solve():
    input = sys.stdin.read
    data = input().split()
    if not data:
        return
    
    t = int(data[0])
    results = []
    idx = 1
    
    for _ in range(t):
        a = int(data[idx])
        b = int(data[idx + 1])
        c = int(data[idx + 2])
        idx += 3
    
        anna_moves = a + (c + 1) // 2
        katie_moves = b + c // 2
        
        if anna_moves > katie_moves:
            results.append("First")
        else:
            results.append("Second")
            
    print("\n".join(results))

if __name__ == "__main__":
    solve()