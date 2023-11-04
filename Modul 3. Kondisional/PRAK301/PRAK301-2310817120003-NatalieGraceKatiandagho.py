berapa = input ()
apa_ya = berapa.split()
a, b = map(int, apa_ya)
if a < b:
    print(f"\n{a} {b}")
else:
    print(f"\n{b} {a}")
