berapa = input()
apa_ya = berapa.split()
r, t = map(int, apa_ya)

phi = 22 / 7
v = phi * (r**2) * t
l = 2 * phi * r * (r + t)
k = 2 * phi * r

print(f'Volume = {v:.2f}')
print(f'Luas = {l:.2f}')
print(f'Keliling = {k:.2f}')