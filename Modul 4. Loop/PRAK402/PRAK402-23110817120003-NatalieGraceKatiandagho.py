batas = int(input())

for x in range(1, batas + 1):
    if x % 2 != 0:
        print(f"{x} ", end="")

print()

for x in range(batas, 0, -1):
    if x % 2 == 0:
        print(f"{x} ", end="")