oceny_all = [[1,2,3], [6,6,5], [4,3,5]]


oceny_slownik = {}
oceny_slownik["oskar"] = [1,2,3,4,5,6]
oceny_slownik["marek"] = [6,6,6]
# print(oceny_slownik["oskar"])


for imie, oceny in oceny_slownik.items():
    print(imie, oceny) 

for oceny in oceny_slownik.values():
    print(oceny) 