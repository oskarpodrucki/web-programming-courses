first_name = input("Jak masz na imię?")
age = input("Ile masz lat?")
# print(first_name)
print(f'hello {first_name}!')
print(f'mam {age}lat')

if first_name == 'Oskar':
    print('hej oskar')
else:
    print('hej, miło mi cię poznać')

if age >= 18:
    print('pełnoletni')
else:
    print('nie pełnoletni')
    print(f'{18-age} lat')

