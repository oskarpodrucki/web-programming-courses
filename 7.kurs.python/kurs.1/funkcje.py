import math

# Function to calculate factorial
def silnia(n):
    # 5! = 1 * 2 * 3 * 4 * 5
    res = 1
    for x in range(1, n + 1):
        res *= x
    return res

# Open and read lines from a file
lines = []
with open(".plik.txt", encoding='UTF-8') as f:
    for line in f:
        lines.append(line.strip())
    # Print the read lines
    print(lines)

# Calculate factorial for each number in the file
for number in lines:
    print(silnia(int(number)))

# GCD calculation
print(math.gcd(24, 36))

# List of grades
oceny = [4, 1, 3, 6, 5]

# Find max and min grades
print("Max grade:", max(oceny))
print("Min grade:", min(oceny))

# Square root calculation
print("Square root of 36:", math.sqrt(36))

# Round a number to a specific decimal place
print("Round 10.2131324 to 3 decimal places:", round(10.2131324, 3))

# Ceil and floor functions
print("Ceil of 10.5:", math.ceil(10.5))
print("Floor of 10.5:", math.floor(10.5))

# Absolute value calculation
print("Absolute value of -124:", abs(-124))
