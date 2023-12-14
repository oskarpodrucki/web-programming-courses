name = 'Oskar'

print(name[0])

for letter in name:
    print(letter)

if "o" in name:
    print("Jest taka litera")

name = name.lower()
print(name)

name = name.upper()
print(name)

print(len(name))

name = name.replace('kar', 'pod')
print(name)

test_string = "no siema co tam u ciebie mój misiaczku ?"
test_string = test_string.replace(" ", ", ")

if test_string.startswith('no'):
    print("No")

if test_string.endswith('?'):
    print("?")

print(test_string)

new_string = f"Nazywam się {name}"
print(new_string)

print(new_string[-1])
print(new_string[3:10])
