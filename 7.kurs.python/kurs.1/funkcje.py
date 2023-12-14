def silnia(n):
    # 5! = 1 * 2 * 3 * 4 * 5
    res = 1
    for x in range(1, n+1):
        res = res * x
    return res

# print(silnia(5))

lines = []
with open(".plik.txt", encoding='UTF-8') as f:
    # print(f.readlines())
    for line in f:
        lines.append(line.strip())
    print(lines)

for number in lines:
    print(silnia(int(number)))


import math

#24, 36
print(math.gcd(24,36))


oceny = [4,1,3,6,5]

print(max(oceny))
print(min(oceny))


print(math.sqrt(36))

print(round(10.2131324, 3))

print(math.ceil(10.5))
print(math.floor(10.5))

print(abs(-124))