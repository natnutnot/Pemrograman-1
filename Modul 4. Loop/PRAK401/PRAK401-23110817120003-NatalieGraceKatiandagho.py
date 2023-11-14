kelipatan, MauApa = input().split() 

for x in range(1, 51):
    if x % int (kelipatan) == 0:
        print(f"{MauApa} ", end="")
    else:
        print(f"{x} ", end="")
