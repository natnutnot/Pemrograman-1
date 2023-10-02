from math import sqrt
alas = 5
tinggi = 12
luas = int(0.5*alas*tinggi) 
sisi_miring = int(sqrt((alas * alas) + (tinggi * tinggi)))
keliling = alas + tinggi + sisi_miring 
print("Diket :")
print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm\n")
print(f"Jawab :")
print(f"Sisi A = {tinggi} cm")
print(f"Sisi B = {sisi_miring} cm")
print(f"Sisi C = {alas} cm")
print(f"Keliling = {keliling} cm")
print(f"Luas = {luas} cm ")