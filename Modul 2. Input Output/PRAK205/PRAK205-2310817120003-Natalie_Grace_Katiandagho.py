import math
berapa = input()
apa_ya = berapa.split()
a, b = map(int, apa_ya)

c = int(math.sqrt(b ** 2 - a ** 2)) 
K = int(a + b + c)
L = int( 0.5 * c * a)

print(f'Alas = {c} cm')
print(f'Tinggi = {a} cm')
print(f'Keliling = {K} cm')
print(f'Luas = {L} cm^2')