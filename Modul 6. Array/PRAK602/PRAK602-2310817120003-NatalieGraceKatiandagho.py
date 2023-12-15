jumlah_ruangan = int(input())
zetsu = [int(j) * (i + 1) for i, j in enumerate(input().split())]

print(*zetsu)
