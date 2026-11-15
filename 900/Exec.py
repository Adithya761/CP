def exciting_bets():
	import sys
	input = sys.stdin.read
	data = input().split()

	t = int(data[0])  # Read the number of test cases
	index = 1
	results = []

	for _ in range(t):
		a = int(data[index])  # Read the value of a
		b = int(data[index + 1])  # Read the value of b
		index += 2

		# Ensure a is the larger number for simplicity
		if b > a:
			a, b = b, a

		# If a and b are equal, the excitement is infinite, so output 0 0
		if a == b:
			results.append("0 0")
		else:
			# Calculate the difference, which is the gcd when a != b
			gcd = a - b

			# Calculate the minimum number of moves to achieve maximum excitement
			# Either increase or decrease to the nearest multiple of gcd
			moves = min(b % gcd, gcd - b % gcd)

			# Append the maximum excitement and the minimum moves required
			results.append(f"{gcd} {moves}")

	# Print all results for each test case
	print("\n".join(results))
if __name__ == "__main__":
    exciting_bets()
# Time Complexity (TC): O(1)
# Space Complexity (SC): O(1)
