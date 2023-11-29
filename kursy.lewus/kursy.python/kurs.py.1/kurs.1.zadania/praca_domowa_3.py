import math

print("Wartości w okręgu")
print("Podaj dwa dowolne punkty na płaszczyźnie które tworzą odcinek")

print("Odcinek 1:")
x1 = float(input("Podaj x1: "))
y1 = float(input("Podaj y1: "))

print("Odcinek 2:")
x2 = float(input("Podaj x2: "))
y2 = float(input("Podaj y2: "))

diameter = float(((x2 - x1)**2 + (y2 - y1)**2)**0.5)
pi = 3.14

#Pole
print("Pole:")
area = float(pi * (diameter / 2) ** 2)

print(f'pole koła dla tej srednicy wynosi {area}')
