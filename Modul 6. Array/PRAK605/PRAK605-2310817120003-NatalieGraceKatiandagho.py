n = int(input())

A = []
B = []
hasil = []

print("Matriks A")
for i in range(n):
    baris_A = list(map(int, input().split()))
    A.append(baris_A)

print("Matriks B")
for i in range(n):
    baris_B = list(map(int, input().split()))
    B.append(baris_B)

print("Matriks AXB")
for i in range(n):
    baris_hasil = []
    for j in range(n):
        elemen_hasil = sum(A[i][k] * B[k][j] for k in range(n))
        baris_hasil.append(elemen_hasil)
        print(elemen_hasil, end=" ")
    hasil.append(baris_hasil)
    print()
