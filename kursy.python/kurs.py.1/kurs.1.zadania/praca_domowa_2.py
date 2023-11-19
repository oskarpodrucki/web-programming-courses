import math

print("Zmienianie celcjuszy na fahrenheity i odwrotnie")
print("Wpisz 1 alby zamienić C na F, lub 2 jeżeli chcesz zamienić F na C")

what_do = int(input("co chcesz dzisiaj zrobić?: "))

if what_do == 1:
    print("Zamiana C ---> F")
    valueC = float(input("Podaj Celcjusze: "))
    valueF =  (9/5)*valueC + 32
    print(f'W Fahrenheitach będzie to: {valueF}')
elif what_do == 2:
    print("Zamiana F ---> C")
    valueF = float(input("Podaj Fahrenheity: "))
    valueC =  (valueF - 32)*(5/9)
    print(f'W Celcjuszach będzie to: {valueC}')
else:
    print("nie wiem co chcesz")
    quit()

print('Koniec')