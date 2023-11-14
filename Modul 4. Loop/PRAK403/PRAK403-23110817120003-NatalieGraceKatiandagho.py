x, y = map(int, input().split())
print(f"{x} {y}", end='')

if x < y:
    for z in range(1, y - x + 1):
        print(f" - {x + z} {y - z}", end=' ')
else:
    for z in range(1, x - y + 1):
        print(f" - {x - z} {y + z}", end=' ')