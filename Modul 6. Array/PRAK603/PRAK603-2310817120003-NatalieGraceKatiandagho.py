n1, n2 = map(int, input().split())

if n1 != n2:
    print("Jumlah tidak sama")
else:
    kali = [int(j) for j in input().split()]
    kali1 = [int(j) for j in input().split()]

    hasil = [k * k1 for k, k1 in zip(kali, kali1)]
    print(*hasil)
