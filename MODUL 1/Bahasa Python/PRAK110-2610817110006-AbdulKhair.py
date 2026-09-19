import math

alas = 5
tinggi = 12
hypotenuse = math.sqrt((alas ** 2) + (tinggi ** 2))
perimeter = alas + tinggi + hypotenuse
area = 0.5 * alas * tinggi

print("Diketahui :")
print(f"alas = {alas} cm")
print(f"tinggi = {tinggi} cm")
print("\nJawab :")
print(f"Sisi A = {tinggi} cm")
print(f"Sisi B = {hypotenuse:.0f} cm")
print(f"Sisi C = {alas} cm")
print(f"Keliling = {perimeter:.0f} cm")
print(f"Luas = {area:.0f} cm")