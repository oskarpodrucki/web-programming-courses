temperature = 15
czy_szczesliwy = False

# Check if it's not too cold OR the person is happy
if not temperature <= 10 or czy_szczesliwy:
    print("Wychodzimy")
# Check if it's not too warm, the person is happy, and it's not too cold
elif temperature > -10 and czy_szczesliwy:
    print("Ubierz się ciepło")
# If none of the above conditions are met
else:
    print("Nie wychodzimy")
