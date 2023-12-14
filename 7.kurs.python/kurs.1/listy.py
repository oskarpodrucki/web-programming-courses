from copy import deepcopy

oceny = [1, 5, 1, 3, 2, 5, 6, 3, 4, 5, 1, 2, 3]

# 1:
print(oceny[0])
print(oceny[5])

# 2:
lenght = len(oceny)
for i in range(lenght):
    print(oceny[i], end=" ")

# for ocena in oceny:
#     print(ocena, end=" ")

# for i, ocena in enumerate(oceny):
#     print(i, ocena)

# 3: 
for i, ocena in enumerate(oceny):
    if i % 2 == 0 and ocena > 3:
        print(i, ocena)

# 4:
for i, ocena in enumerate(oceny):
    oceny[i] += 1

print(oceny)

# 5:
oceny.append(5)
oceny.extend([3, 1, 2])
oceny.insert(1, 4)
print(oceny)
oceny.remove(1)
oceny.pop()

# 6:
print(oceny.index(1))
oceny.sort()
oceny = sorted(oceny, reverse=True)

if 6 in oceny:
    print("jest taka ocena")

# 7:
oceny_all = [[1, 2, 3], [6, 6, 5], [4, 3, 5]]
# print(oceny_all[0][0])

# for student in oceny_all:
#     for ocena in student:
#         print(ocena, end=" ")
#     print()

# 8:
oceny_2 = deepcopy(oceny_all)
# oceny_2 = oceny_all
oceny_2[0][0] = 123
print(oceny_all)