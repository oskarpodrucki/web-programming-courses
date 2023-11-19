import math

print("Obliczanie długości przeciwprostokątnej")
print("Podaj długości boków: ")
liczba1 = float(input("podaj 1 liczbę: "))
liczba2 = float(input("podaj 2 liczbę: "))

liczba3 = math.sqrt(liczba1**2 + liczba2**2)


print(f'Długość przeciwprostokątnej to: {liczba3}')