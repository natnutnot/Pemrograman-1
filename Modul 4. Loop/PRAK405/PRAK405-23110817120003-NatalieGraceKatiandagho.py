x, y = map(int,input().split())
total1 = 0
total2 = 0

for a in range(1, x + 1):
    perkalian = a * y
    total1 += perkalian
    if a > 1:
        for b in range(a, 0, -1):
            print(f"({b} * {y})", end="")
            if b > 1:
                print(" + ", end="")
        print(f" = {total1}")
    elif a == 1:
        print(f"({a} * {y}) = {perkalian}")

    total2 += total1

print(total2)