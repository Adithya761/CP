import sys
import math

input = sys.stdin.read

data = input().split()
index = 0

t = int(data[index])
index += 1

for _ in range(t):
	n = int(data[index])
	index += 1
	a = list(map(int, data[index:index + n])) 
	index += n

	is_beautiful = False 

	for i in range(n):
		for j in range(i + 1, n):
			if math.gcd(a[i], a[j]) <= 2:
				is_beautiful = True 


	if not is_beautiful:
		print("NO")
	else:
		print("YES")

